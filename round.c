#include<stdio.h>
#define PI 3.1415926

int main() 
{ 
    double r,h;
    scanf("%lf %lf",&r,&h);
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f",2*PI*r,PI*r*r,4*PI*r*r,PI*r*r*r*4/3,PI*r*r*h);

    return 0; 
}