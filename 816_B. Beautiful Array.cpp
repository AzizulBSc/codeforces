#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e9+7;



int main()
{


#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("result3.txt", "w", stdout);

#endif

    ll t;
    cin>>t;

    while(t--)
    {

        ll n,k,b,s;

        cin>>n>>k>>b>>s;

        ll temp1 = (b*k);
        ll temp2 = ((b+1)*k) -1;

        ll req;
        ll last;

        if(s-temp1>=0 && s-temp2<=0)
        {

            req = 0;
            last = s;

        }
        else
        {



            if(s-temp2>0)
            {
                req = s-temp2;
                last = temp2;
            }
            else
            {
                cout<< -1<<endl;
                continue;
            }

        }

        if(req>(n-1)*(k-1))
        {
            cout<< -1<<endl;
            continue;
        }

        else
        {

            ll index = 0;
            if(k>1)
            {
                index = (req)/(k-1);

            }
            index--;

            for(int i=0; i<=index; i++)
            {
                cout<<k-1<<" ";
            }

            if(index+1<n-1 && index+1>=0)
            {
                cout<<(req)%(k-1)<<" ";
            }

            for(int i=index+2; i<n-1; i++)
            {
                cout<<0<<" ";
            }

            cout<<last<<endl;
        }








    }










}


