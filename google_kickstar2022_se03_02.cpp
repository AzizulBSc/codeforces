#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define For(i,n) for(ll i = 0;i<n;i++)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

ll countRecordBreakingDays(vector<ll> visitors) {
  ll recordBreaksCount = 0;
  int previousRecord = 0;
  for(int i = 0; i < visitors.size(); i++) {
     bool greaterThanPreviousDays = i == 0 || visitors[i] > previousRecord;
     bool greaterThanFollowingDay = i == visitors.size()-1 || visitors[i] > visitors[i+1];
     if(greaterThanPreviousDays && greaterThanFollowingDay) {
        recordBreaksCount++;
     }
     if(previousRecord>visitors[i])
         previousRecord = previousRecord;
     else
        previousRecord = visitors[i];
  }
  return recordBreaksCount;
}

ll solve()
{
    IN1(n);
    vector<ll> visitors(n);
    VIN(visitors);
    return countRecordBreakingDays(visitors);
}


int main()
{
    fastio();
    int t=1,j=1;
    ll breakingDays;
    cin>>t;
    while(t--)
    {
        breakingDays =  solve();
        cout<<"Case #"<<j++<<": "<<breakingDays<<nn;
    }

    return 0;
}
