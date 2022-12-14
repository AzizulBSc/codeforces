#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int num_dig_sum(int num){
    int sum = 0;
    while(num>0){
        sum += num%10;
        num /=10;
    }
    return sum;
}
int str_dig_sum(string s){
    int sum = 0;
    for(int i = 0;i<s.size();i++){
        sum += s[i] - '0';
    }
    return sum;
}
void solve()
{
 string  n;
 cin>>n;
 if(n.size()==1){
    cout<<0<<nn;
    return;
 }
 int sum = str_dig_sum(n);
 int count = 1;
 while(sum>9){
     sum = num_dig_sum(sum);
     count++;
 }
 cout<<count<<nn;
}

int main()
{
    fastio();
    int t=1;
    //cin>>t;
    while(t--) {
    solve();
}
return 0;
}

