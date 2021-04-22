#include<bits/stdc++.h>>
#include<graphics.h>
using namespace std;
int main()
{
    int x = 700, y = 500;
    initwindow(x, y, "5.Sriti Shoudha", 300, 200);
    //left side
    line(310, 415, 350, 23);
    line(271, 415, x - 359, 109);
    line(233, 415, x - 383, 214);
    line(192, 415, x - 412, 284);
    line(154, 415, x - 452, 339);
    line(115, 415, x - 501, 378);
    line(82, 415, x - 559, 403);

   //rigth side code
    line(x - 310, 415, 349, 23);
    line(x - 272, 415, 358, 109);
    line(x - 234, 415, 382, 214);
    line(x - 193, 415, 411, 284);
    line(x - 155, 415, 451, 339);
    line(x - 116, 415, 500, 378);
    line(x - 83, 415, 558, 403);

    setlinestyle (0, 0, 5);
    line(25, 415, 675, 415);
     settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
    setcolor(2);
    outtextxy(100,450,"C173065");

    cin.get();
    return 0;
}
