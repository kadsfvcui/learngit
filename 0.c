#include<stdio.h>
int main()
{
    int x;
    double sum=0;
    int cnt=0;
    
    scanf("%d",&x);
    while(x!=-1)
    {
        sum+=x;
        cnt++;
        scanf("%d",&x);

    }
    
    printf("%f",sum/cnt);
    return 0;
}