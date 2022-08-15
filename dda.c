#include <conio.h>
#include <iostream.h>
#include <graphics.h>
#include <math.h>
void main(){
float x,y,dx,dy;
int x1,y1,x2,y2,i,length;
int gdriver = DETECT, gmode;
initgraph(&gdriver,&gmode,”C:\TC\BGI”);
cout<<“Enter co-ordinates of point 1: “;
cin>>x1>>y1;
cout<<“Enter co-ordinates of point 2: “;
cin>>x2>>y2;
dx = abs(x2-x1);
dy = abs(y2-y1);
if(dx>=dy) length = dx;
else length = dy;
dx = dx/length;
dy = dy/length;
x=x1;
y=y1;
i=1;
while(i<=length){
putpixel(x,y,WHITE);
x = x + dx;
y = y + dy;
i++;
}
getch();
closegraph();
}
