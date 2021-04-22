#include <stdio.h>
int main(void) {
    int H = 52;
    float pie = 3.1416;
    float area = (float)((pie*H*H)/4);
    printf("the area of circumcircle of a right angled triangle of Hypotenuse %d is %f  %f ",H,area,52/2-area);
    return 0;
}
