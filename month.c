#include<stdio.h>
int main()
{
    int year,month,day,n;
    int day_left=0;
    scanf("%d %d %d",&year,&month,&day);

    int Month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int Month1[]={31,29,31,30,31,30,31,31,30,31,30,31};

    scanf("%d",&n);
    if(year%4!=0){
        if(month<1||month>12||day<1||day>Month[month-1])
        printf("erro\n");

        if(n<=Month[month-1]-day)
        printf("%d %d %d\n",year,month,day+n);
        if(n>Month[month-1]-day){
            n-=(Month[month-1]-day);
            month++;
            for(month;Month[month-1]<n;month++)
            n-=Month[month-1];
            printf("%d %d %d\n",year,month,n);
        }for(int i=month;i<12;i++)
        day_left+=Month[i];
        printf("%d",Month1[month-1]-day+day_left);
    }else{
        if(month<1||month>12||day<1||day>Month1[month-1])
        printf("erro\n");

        if(n<=Month1[month-1]-day)
        printf("%d %d %d\n",year,month,day+n);
       if(n>Month1[month-1]-day){
            n-=(Month[month-1]-day);
            month++;
            for(month;Month1[month-1]<n;month++)
            n-=Month1[month-1];
            printf("%d %d %d\n",year,month,n);
        }for(int i=month;i<12;i++)
        day_left+=Month1[i];
        printf("%d",Month1[month-1]-day+day_left);
    }
    return 0;
}