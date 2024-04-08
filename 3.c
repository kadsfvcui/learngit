#include<stdio.h>
int main()
{
    int i,n;
    i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%10d",i*i);
        i++;
    }
    return 0;
}