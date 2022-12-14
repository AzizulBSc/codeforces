#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int size_to_num(string s)
{
    if(s=="S")
    {
        return 0;
    }
    else if(s=="M")
    {
        return 1;
    }
    else if(s=="L")
    {
        return 2;
    }
    else if(s=="XL")
    {
        return 3;
    }
    else if(s=="XXL")
    {
        return 4;
    }
    else return 0;
}
string getSize(int x)
{
    switch (x)
    {
    case 0:
        return "S";
    case 1:
        return "M";
    case 2:
        return "L";
    case 3:
        return "XL";
    case 4:
        return "XXL";
    default :
        return "S";
    }

}
void solve()
{
    int A[5];
    for(int i = 0; i<5; i++)
    {
        cin>>A[i];
    }
    int k;
    cin>>k;
    string s[1002];
    string result[1002];
    for(int i=0; i<k; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<k; i++)
    {
        int temp = size_to_num(s[i]);
        int index = 1;
        for(int j=0; j<5; j++)
        {
            if(A[temp]>0)
            {
                result[i] = getSize(temp);
                A[temp]--;
                break;
            }
            else if(temp+index<5 && A[temp+index]>0)
            {
                result[i] = getSize(temp+index);
                A[temp+index]--;
                break;
            }
            else if(temp-index>=0 && A[temp-index]>0)
            {
                result[i] = getSize(temp-index);
                A[temp-index]--;
                break;
            }
            else
            {
                index++;
            }
        }
    }
    for(int i=0; i<k; i++)
    {
        cout<<result[i]<<nn;
    }
}
int main()
{
    fastio();
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

