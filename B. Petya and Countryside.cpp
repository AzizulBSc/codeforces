#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
void solve()
{
    ll n,count = 0,mx=0;
    cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i<n; i++)
    {
        cin>>a[i];
    }
        for (int i = 0; i < n; i++) {
            count = 1;
            ll temp = a[i];
            for (int j = i - 1; j >= 0; j--) {
                if (a[j] <= temp)count++,temp = a[j];
                else break;
            }
            temp = a[i];
            for (int k = i + 1; k < n; k++) {
                if (a[k] <= temp)count++, temp = a[k];
                else break;
            }
            mx = max(mx, count);
        }
        cout << mx << endl;
}
int main()
{
    solve();
    return 0;
}
