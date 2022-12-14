#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define nl "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
using namespace std;
void solve(){
IN1(n);
string s;
cin>>s;  
vector<int> rle;
        for (ll i = 0, j = 0; i < n; i = j) {
            while (j < n && s[i] == s[j]) {
                j++;
            }
            rle.emplace_back(j - i);
        }
        if (rle[0] == n) {
            cout << 0 << '\n';
        } else {
            int x = max(0, rle[0] - rle[1]);
            int y = rle[0];
            long long ans = 0;
            for (int i = 0; y + i < n; i++) {
                ans *= 2;
                if (s[x + i] != s[y + i]) {
                    ans++;
                }
                ans %= 1000000007;
            }
            cout << ans << endl;
        }
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
