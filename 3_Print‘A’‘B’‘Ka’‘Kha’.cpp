#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(700,450);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 6);
    outtextxy(100,80,"A");
    outtextxy(180,80,"B");
    //for drawing kkha
    circle(270,200,13);
    arc(290, 200,195,340, 30);//x,y,sa,ea,r
    line(325,200,250,300);
    line(250,300,370,350);
    line(370,350,370,190);
    line(370,200,400,200);
    //for drawing kkha
    line(520,200,420,300);
    line(420,300,520,350);
    line(520,350,520,200);//horizontal line
    line(450,200,580,200);//matra
    circle(555,245,13);
    arc(535,245,18,120,30);//x,y,sa,ea,r

    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
    setcolor(2);
    outtextxy(100,400,"C173065");
    cin.get();
}
