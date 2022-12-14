#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define repa(i,a,b) for(ll i = a; i <= b; i++)
#define repd(i,a,b) for(ll i = a; i >= b; i--)
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vl vector<ll>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ld long double
#define nl cout << "\n"
#define MAX 1000000000000
#define all(x) x.begin(),x.end()
//debuging
#define deb1(n) cout<<n<<" "
#define deb2(a,n) cout<<"a->"<<n<<" "
#define deb3(A,a,b) repa(i,a,b){cout<<A[i]<<" ";}nl
#define deb4(v) repa(i,0,v.size()-1){cout<<v[i]<<" ";}nl
#define printclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

ll mod = 998244353 ;

ll power(ll n, ll p){
    if(p==0) return 1;
    ll num = (n*n)%mod;
    if(p%2){
        return (n * power(num, (p-1)/2))%mod;
    }
    else{
        return power(num, p/2)%mod;
    }
}

ll fact(ll n){
    if(n <= 1) return 1;
    return (n * fact(n-1))%mod;;
}

ll inv(ll n){
    return power(n, mod-2);
}

ll nCr(ll n, ll r){
    ll num = fact(n);
    ll deno = inv(fact(r));
    ll d2 = inv(fact(n-r));
    ll ans = (((num*deno)%mod )* d2) % mod;
    return ans;
}

vector<vector<ll>> dp(61, vector<ll>(2,0));
void presolve(){
    dp[1][0] = 1;
    dp[1][1] = 0;
    repa(n,2,60){
        ll tm = n*2 - 1;
        ll val = nCr(tm, n-1);
        dp[n][0] = val + dp[n-1][1];
        dp[n][0] %= mod;
        ll tot = nCr(2*n, n);

        tot -= 1;
        tot = (tot+mod)%mod;
        dp[n][1] = tot - dp[n][0];
        dp[n][1] = (dp[n][1]+mod)%mod;
    }

}

void solve(){
    ll x;
    cin >> x;
    x /= 2;
    cout << dp[x][0] << ' ' << dp[x][1] << ' ' << 1; nl;
}

int main (){
    IOS;
    #ifndef ONLINE_JUDGE
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    #endif

    presolve();
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    printclock
    cout.flush();
      return 0;
}
