#include<iostream>
#include<graphics.h>
main ()
{

initwindow (1000, 600, "Sohid Minar",300, 200);

setfillstyle (SOLID_FILL, RED);line (605, 75, 605, 147);

setlinestyle (0, 0, 7);
  rectangle (650, 230, 750, 530);

setlinestyle (0, 0, 12);

rectangle (800, 300, 900, 530);
  std::cin.get ();
}


