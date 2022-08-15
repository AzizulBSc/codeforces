#include<bits/stdc++.h>
using namespace std;
main(){
    int n,result=-1,count=0;
  cin>>n;
  string binary = std::bitset<64>(n).to_string();
  for(int i = 0;i<binary.size();i++){
    if(binary[i]=='1'){
        count++;
    if(result<count){
        result = count;
        }
    }
    else{
        count = 0;
    }
  }
  cout<<result<<endl;
}
