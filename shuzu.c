#include<stdio.h>
int main()
{
    int number[100];
    int x;
    int cnt=0;
    int sum=0;
    
    scanf("%d",&x);
    while(x>0)
    {
        number[cnt]=x;
        sum+=x;
       cnt++;
        scanf("%d",&x);
    }
    if(cnt>0)
    {   float average=sum/cnt;
        printf("%f\n",average);
    }
    int i;
    for(i=0;i<cnt;i++)
    {
        if(number[i]>sum/cnt)
        {
            printf("%d\n",number[i]);
        }
    }
    return 0;
}