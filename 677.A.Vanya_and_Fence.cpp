#include<bits/stdc++.h>
using namespace std;
main(){
    int n,h,k,w=0;
    cin>>n>>h;
for(int i = 0 ; i<n; i++)
{
     cin>>k;
     if(k==h||k<h) w+=1;
     else if(k>h) w+=2;
}
cout<<w<<endl;
}
