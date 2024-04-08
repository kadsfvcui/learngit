/*计算账单*/
#include<stdio.h>
int main()
{
    int amout,a,b,c,d;
    printf("Enter a dollar amout:");
    scanf("%d",&amout);
    a=amout/20;
    printf("$20 bills:%d\n",a);
    b=(amout-20*a)/10;
    printf("$10 bills:%d\n",b);
    c=(amout-20*a-10*b)/5;
    printf("$5 bills:%d\n",c);
    d=amout-20*a-10*b-5*c;
    printf("$1 bliis:%d\n",d);
    return 0;
}