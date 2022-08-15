#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string,long> phone_book;
    int n,c=0 ;
    cin>>n;
    string name1;
    for(int i = 0;i<n;i++){
        if(i<n){
        string name;
        long long num;
        cin>>name>>num;
        phone_book.insert({name,num});
        }

    }
  while(cin >>name1){
       if (phone_book.find(name1) == phone_book.end())
         cout <<"Not found"<<endl;
       else
         cout <<name[i]<<"="<<phone_book[name[i]]<<endl;
    }
    return 0;
}
