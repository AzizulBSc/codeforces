#include<bits/stdc++.h>
using namespace std;
int digSum(int n){
    int sum = 0;
    while(n){
        sum += sum%10;
        n /=10;
    }
    return sum;
}
int solve(int n){
    int ans=0001;
    vector<int> v;
    v.push_back(1);
    for(int i = 2;i<=n/2;i++){
        if(n%i==0){
            v.push_back(i);
           // v.push_back(n/i);
        }
    }
   if(digSum(v[v.size()])>v[v.size()-1]){
      ans = v[v.size()];
      }
      else{
          ans = v[v.size()-1];
      }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans = solve(n);
    cout<<ans<<endl;
}
