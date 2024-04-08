#include<stdio.h>
int main()
{
    int i;
    char *a[]={
       "nothing",
       "january",
       "february",
       "march",
       "april",
       "may",
       "june",
       "july",
       "august",
       "september",
       "october",
       "november",
       "december"
    };
    scanf("%d",&i);
    printf("%s",a[i]);
    return 0;
}