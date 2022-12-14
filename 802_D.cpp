#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n],brr[n],crr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>brr[i];
    for(int i=0;i<n;i++) crr[i]=brr[i]-arr[i];
    sort(crr,crr+n);
    int ans=0, i=0,j=n-1;
    while (i<j){
        if(crr[i]+crr[j]<0){
            i++;
            continue;
        }
        ans++;
        i++,j--;
    }cout<<ans<<endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }}
