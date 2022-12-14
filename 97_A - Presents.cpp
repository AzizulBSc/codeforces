
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,n;
   cin>>t;
   vector <int> vec(t) ;
   for(int i = 0;i<t;i++){
       cin>>n;
      vec[n-1] = i+1;
   }
for(int i = 0;i<t;i++){
      cout<<vec[i]<<' ';
   }
    return 0;
}
