#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool isPrime1(ll num)
{
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++)
    {
        if(num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
void solve()
{
    ll l,r,indx=0;
    map<ll,ll> prime;
    cin>>l>>r;
    if(!isPrime1(r))
    {
        cout<<"NO"<<nn;
    }
    else
    {

        for(ll i = l+1; i<=r; i++)
        {
            if(isPrime1(i)==true)
            {
                prime[indx] = i;
                indx++;
            }
            else
            {
                continue;
            }
        }
        if(prime.size()==0)
        {
            cout<<"NO"<<nn;
        }
        else
        {
            if(prime[0]==r)
            {
                cout<<"YES"<<nn;
            }
            else
            {
                cout<<"NO"<<nn;
            }
        }

    }

}


int main()
{
    fastio();
    solve();
    return 0;
}


