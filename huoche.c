#include<stdio.h>
int main()
{
    int hour1,minute1,hour2,minute2;
    scanf("%2d%2d %2d%2d",&hour1,&minute1,&hour2,&minute2);
    if(minute1>minute2)
    printf("%.2d:%.2d",hour2-hour1-1,60-minute1+minute2);
    else 
    printf("%.2d:%.2d",hour2-hour1,minute2-minute1);
    return 0;
}

