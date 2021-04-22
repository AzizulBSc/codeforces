#include<bits/stdc++.h>
using namespace std;
main()
{
   int L,B,Y=0;
   cin>>L>>B;
   for(int i=1;i<=6;i++)
   {  Y=0;
       L =L*3; B =B*2;
       if(L>B) {Y=i;cout<<Y<<endl;break;}
       else if(L<=B){continue;}

   }

}
