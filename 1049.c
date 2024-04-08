#include<stdio.h>
int main() 
{ 
    int x1,x2,x3,y1,y2,y3;
    double S0,S;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    S0=1/2 * (x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2);
    S=(S0>0?S0:(-S0));
    printf("%.2lf",S);
    return 0; 
}