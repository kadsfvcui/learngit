/*还贷计算*/
#include<stdio.h>
int main()
{   
    float amout,rate,payment,remaining_1,remaining_2,remaining_3;
    printf("Enter amout of loan:");
    scanf("%f",&amout);
    printf("Enter interest rate:");
    scanf("%f",&rate);
    printf("Enter monthly payment:");
    scanf("%f",&payment);
    remaining_1=amout-payment+amout*(0.01*rate/12);
    remaining_2=remaining_1-payment+remaining_1*(0.01*rate/12);
    remaining_3=remaining_2-payment+remaining_2*(0.01*rate/12);
    printf("Balance remaining after first payment:%.2f\n",remaining_1);
    printf("Balance remaining after second payment:%.2f\n",remaining_2);
    printf("Balance remaining after third payment:%.2f\n",remaining_3);
    return 0;
}