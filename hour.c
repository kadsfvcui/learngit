#include <stdio.h>
int main()
{
    int hour1,minute;
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&hour1,&minute);
    printf("Equivalent 12-hour time:");
    if(hour1>12){
        int hour2=hour1-12;
        printf("%d:%.2d PM",hour2,minute);
    }else if(hour1==12){
        printf("%d:%.2d PM",hour1,minute);
    }else if(hour1==0){
        printf("12:%.2d AM",minute);
    }else{
        printf("%d:%.2d AM",hour1,minute);
    }return 0;

}