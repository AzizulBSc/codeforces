#include<stdio.h>
#include<graphics.h>
int main ()
{
initwindow(700,450);

setfillstyle (SOLID_FILL, GREEN);

rectangle (150, 120, 460, 300);

floodfill (300, 210, 15);

setfillstyle (SOLID_FILL, RED);


circle (300, 210, 51);

floodfill (300, 210, 15);

settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);

setcolor(4);

outtextxy(100,380,"Independence Day");
outtextxy(100,410,"Aziz");

getch ();
closegraph ();
}
