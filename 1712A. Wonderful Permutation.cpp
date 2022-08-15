#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i = 0;i<n;i++){
           cin>>a[i];
        }
        int count = 0;
        for (int i = 0;i<k;i++){
            if(a[i]>k){
                count++;
            }
        } 
        cout<<count<<endl;
        
    }
    return 0;
}