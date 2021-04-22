#include<iostream>
#include<graphics.h>
using namespace std;
main()
{
    initwindow(1024,700);
    circle(80, 80, 70);
    rectangle(200,200,300,130);
    line(500,300,400,400);
    line(500,300,600,400);
    line(400,400,600,400);
    cin.get();
}
