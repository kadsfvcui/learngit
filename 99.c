#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
           printf("%d*%d=%d",i,j,i*j);
          j++;
        }
        i++;}
        return 0;

}