/*表达式求值*/
#include<stdio.h>
int main()
{
    float a,b=0;
    char E;

    printf("Enter an expression:");
    scanf("%f",&a);
    
    while((E=getchar())!='\n')
    {
        scanf("%f",&b);
        if(E=='+')
        a+=b;
        else if(E=='-')
        a-=b;
        else if(E=='*')
        a*=b;
        else if(E=='/')
        a/=b;
    }

    printf("Value of expression:%.1f",a);
    
    return 0;
}