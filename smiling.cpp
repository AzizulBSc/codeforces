#include<stdio.h>
#include<graphics.h>
int main ()
{
initwindow(900,500);

setfillstyle (SOLID_FILL, GREEN);

rectangle (150, 120, 460, 300);

floodfill (300, 210, 15);

setfillstyle (SOLID_FILL, RED);


circle (300, 210, 51);

floodfill (300, 210, 15);
getch ();
}
