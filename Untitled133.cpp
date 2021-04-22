#include<iostream>
#include<graphics.h>
main ()
{

initwindow (1000, 600, "Sohid Minar",300, 200);

setfillstyle (SOLID_FILL, RED);
//red circle
circle (500, 215, 125);
  floodfill (500, 200, 15);
//left side rectangle
setlinestyle (0, 0, 7);
  rectangle (250, 230, 350, 530);

setlinestyle (0, 0, 12);

rectangle (100, 300, 200, 530);
//bold line attach with main rectangle
setlinestyle (0, 0, 10);
  line (397, 74, 410, 74);

setlinestyle (0, 0, 7);

line (395, 75, 395, 147);

line (397, 75, 400, 147);

line (394, 147, 400, 220);

line (400, 147, 400, 220);

setlinestyle (0, 0, 2);	//main rectangle
  rectangle (400, 70, 600, 530);
//bold line attach with main rectangle
setlinestyle (0, 0, 10);
  line (590, 74, 604, 74);

setlinestyle (0, 0, 7);

line (605, 75, 605, 147);

line (603, 75, 600, 147);

line (605, 147, 600, 220);

line (600, 147, 600, 220);
//rigth side rectangle
setlinestyle (0, 0, 7);
  rectangle (650, 230, 750, 530);

setlinestyle (0, 0, 12);

rectangle (800, 300, 900, 530);

setlinestyle (0, 0, 20);
//gound;
line (80, 530, 920, 530);
  std::cin.get ();
}


