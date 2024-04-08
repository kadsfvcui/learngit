#include <stdio.h>

typedef struct{
        int year;
        int month;
        int day;
    }DATE;

int main()
{
    int which_day(DATE d);
    int date_cmp(DATE day1,DATE day2);
    int a,b;

    DATE d1={2005,5,19};
    DATE d2={2008,3,12};

    a=which_day(d1);
    b=date_cmp(d1,d2);

    printf("%d,%d",a,b);

    return 0;
}

int which_day(DATE d)
{
    int total=0;
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int Month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    if((d.year%4==0&&d.year%100!=0)||d.year%400==0){
        for(int i=0;i<(d.month-1);i++){
            total+=Month[i];
        }
    }
    else{
        for(int i=0;i<(d.month-1);i++){
            total+=month[i];
        }
    }
    total+=d.day;
    return total;
}

int date_cmp(DATE day1,DATE day2)
{
    if(day1.year<day2.year)
        return -1;
    else if(day1.year>day2.year)
        return 1;
    else if(day1.year==day2.year&&which_day(day1)<which_day(day2))
        return -1;
    else if(day1.year==day2.year&&which_day(day1)>which_day(day2))
        return 1;
    else return 0;
}