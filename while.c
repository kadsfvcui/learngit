#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%10d%10d\n",i,i*i);
        i++;
    }
    return 0;
}