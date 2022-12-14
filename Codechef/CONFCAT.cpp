#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define nl "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
using namespace std;
void solve(){
int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin >> arr[i];
        int maximum = 0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]>arr[maximum])
            maximum = i;
            
        }
        if(maximum == 0)
        {
            cout << -1 << endl;
        }
        else{
            cout << maximum << endl;
            for(int i=0;i<maximum;i++)
                cout << arr[i] << " ";
            cout << endl;
                cout << N-maximum<<endl;
            for(int i=maximum;i<N;i++)
                cout << arr[i] << " ";
                cout << endl;

        }      
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
