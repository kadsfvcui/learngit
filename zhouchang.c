#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double length=0;
    double x0,y0,x1,x2,y1,y2;

    scanf("%d",&n);
    scanf("%lf %lf",&x1,&y1);
    x0=x1;
    y0=y1;

    if(n==1)
    printf("0.00");

    else if(n==2)
    {
        scanf("%lf %lf",&x2,&y2);
        length=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    }

    else
    {
        for(int i=1;i<n;i++)
        {
            scanf("%lf %lf",&x2,&y2);
            length+=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
            x1=x2;
            y1=y2;
        }

        length+=sqrt(pow((x0-x1),2)+pow((y0-y1),2));
    }
    
    printf("%.2lf",length);
    return 0;
}