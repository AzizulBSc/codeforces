#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"yes"<<nn
#define no cout<<"no"<<nn
#define For(i,n) for(ll i =0;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
void num_to_letter(int n)
{
    int a = 97 + n-1;
    //char c = a;
    cout<<char(a);

}
int strtonum(char a)
{
    if(a=='1') return 1;
    if(a=='2') return 2;
    if(a=='3') return 3;
    if(a=='4') return 4;
    if(a=='5') return 5;
    if(a=='6') return 6;
    if(a=='7') return 7;
    if(a=='8') return 8;
    if(a=='9') return 9;
    if(a=='0') return 0;
}
void solve()
{
    IN1(x);
    string s;
    cin>>s;
    for(ll i = 0; i<x;)
    {
        if(s[i+2]=='0'&&s[i+3]=='0'&&i<x-3){
            num_to_letter(strtonum(s[i]));
            i++;
            if(i==x) break;
        }
        else if(s[i+2]=='0'&&i<x-2)
        {
            int num = strtonum(s[i]) *10 + strtonum(s[i+1]);
            num_to_letter(num);
            i +=3;

        }
        else
        {

            num_to_letter(strtonum(s[i]));
            i++;
            if(i==x) break;

        }

    }
    cout<<nn;


}
int main()
{
    fastio();
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

