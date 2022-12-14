#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    string s;
    cin>>n;
    bool zer0 = false;
    long long zer0es = 0;
    string notBeautyful;
    vector<long long> vec;
    for(long long i = 0;i<n;i++){
        cin>>s;
        if(s=="0") zer0=true;
        map<char,long long> mp;
        for(auto c:s) mp[c]++;
        bool noB = false;
        for(char c= '2';c<='9';c++)
            if(mp[c])noB = true;
        if(noB||mp['1']>1)notBeautyful = s;
            else zer0es += mp['0'];

    }
    if(zer0)cout<<0;
    else{
        if(notBeautyful.empty())cout<<1;
        else cout<<notBeautyful;
        while(zer0es--)cout<<0;
    }
}
int main(){
    freopen("input.txt","r",stdin);
    solve();
    return 0;
}
