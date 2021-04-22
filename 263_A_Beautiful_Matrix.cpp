#include<bits/stdc++.h>
using namespace std;

main()
{
    int a,c,b,move=0;
    for(int i = 1;i<=5;i++)
    {
        for(int j = 1;j<=5;j++)

        {
            cin>>c;
            if(c==1)
            {
              a = 3-i;
              b= 3-j;
              if(a<=0&&b<=0)
              {
                  move = (-1)*a +(-1)*b;
              }
              else if(a<=0&&b>0)
              {
                  move = (-1)*a +b;
              }

              else if(a>0&&b<=0)
              {
                  move = a + b*(-1);
              }
              else if(a>0&&b>0){
              move = a+b;
              }

            }
            }
            }

cout<<move<<endl;

}
