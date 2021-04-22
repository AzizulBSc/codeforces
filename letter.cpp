#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(700,450);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
    outtextxy(100,80,"A");
    outtextxy(200,74,"B");
    circle(270,200,13);
    arc(290, 200,195,340, 32);
    line(325,200,250,300);
    line(250,300,370,350);
    line(370,350,370,190);
    line(370,200,400,200);
    line(520,200,420,300);
    line(420,300,520,350);
    line(520,350,520,200);
    line(450,200,580,200);
    circle(555,245,13);
    arc(535,245,18,120,32);

    cin.get();
}
