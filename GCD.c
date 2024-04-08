/*最大公约数*/

#include<stdio.h>
int main()
{
    int m,n,t;
    printf("Enter two integers:");
    scanf("%d %d",&m,&n);

    while(n != 0){
        t=m%n;
        m=n;
        n=t;
    }

    printf("Greatest common divisor:%d",m);
    return 0;
}