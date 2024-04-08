/*计算税金*/
#include<stdio.h>
int main()
{
    float i,tax_added;
    printf("Enter an amout:");
    scanf("%f",&i);
    tax_added=1.05*i;
    printf("with tax added:$%.2f",tax_added);
    return 0;

}