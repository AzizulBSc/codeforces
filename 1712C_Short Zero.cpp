#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> a(N);
        for(int i = 0;i<N;i++){
            cin>>a[i];
        }
        if(is_sorted(a.begin(),a.end())){
            cout<<0<<endl;
            continue;
        }
        else
        {
            map<int,int> mnIndx;
            for(int i = 0; i<N; i++)
            {
                if(mnIndx.find(a[i])==mnIndx.end()){
                    mnIndx[a[i]] = i;
                }
            }
            int index = -1;
            for(int i =N-1;i>=1;i--){
                if(a[i]<a[i-1]){
                    index = i-1;
                    break;
                }
            }
            int ans = mnIndx.size();
            set<int> saved;
            for(int i =N-1;i>=index+1;i--){
                if(mnIndx[a[i]]<=index){
                    break;
                }saved.insert(a[i]);
            }
            ans -= saved.size();
            cout<<ans<<endl;
        }
    }
    return 0;
}
