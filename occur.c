/*Number Occurrences*/
#include<stdio.h>
int main()
{
    int i,digit;
    unsigned long  number;
    int Occurrences[10]={0};
    printf("Enter a number:");
    scanf("%ld",&number);

    if(number==0)
    Occurrences[0]=1;

    while(number>0){
        digit=number%10;
        Occurrences[digit]++;
        number/=10;
    }

    printf("Digit:      ",digit);
    for(digit=0;digit<10;++digit)
    printf("%2d",digit);

    printf("\n");

    printf("Occurrences:");
    for(i=0;i<10;i++)
    printf("%2d",Occurrences[i]);
    
    return 0;

}