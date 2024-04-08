#include<stdio.h>
int main()
{
    int days,start_day,n;
    printf("Enter number of days in month: ");
    scanf("%d",&days);

    printf("Enter starting day of the week(1=Sun, 7=Sat):");
    scanf("%d",&start_day);

    printf("日 一 二 三 四 五 六\n");

    for(n=1;n<start_day;n++)
    printf("   ");

    for(n=1;n<=days;n++)
    {printf("%-3d",n);
    
    if((n+start_day-1)%7==0)
    printf("\n");}

    return 0;

    
    
}