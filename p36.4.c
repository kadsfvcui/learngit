/*改进2.6.3*/
#include <stdio.h>
int main()
{
    int num1,denom1,num2,denom2,m,n;
    printf("Enter two fractions seperated by a plus sign:");
    scanf("%d/%d+%d/%d",&num1,&denom1,&num2,&denom2);
    m=num1*denom2+num2*denom1;
    n=denom1*denom2;
     while(n>0)
    {
        int c=m%n;
        m=n;
        n=c;

    }
    printf("%d/%d",(num1*denom2+num2*denom1)/m,(denom1*denom2)/m);
    return 0;
    

}
    

   


