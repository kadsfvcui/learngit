#include<stdio.h>
int main()
{
    int i,n,sum=0,pro=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int pro=1;
        for(int j=1;j<=i;j++)
        
        pro *=j;
        sum+=pro;
    }
    printf("%d",sum);
    return 0;
}