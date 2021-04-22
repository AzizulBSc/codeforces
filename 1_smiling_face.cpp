#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
main()
{
    initwindow(500,450);
    circle(250,225,150);
    circle(175,145,15);
    circle(330,145,15);
    rectangle(240,250,260,150);
    arc(250, 225,210 ,330, 130);//x,y,sa,ea,r

    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
    setcolor(2);
    outtextxy(100,400,"C173065");
   cin.get();
}
