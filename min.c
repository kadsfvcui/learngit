#include<stdio.h>
int main() 
{
    int min(int a,int b,int c,int d);
    int a,b,c,d,min_num;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    min_num=min(a,b,c,d);
    printf("%d",min_num);
    return 0; 
}
int min(int a,int b,int c,int d)
{
    if(a<=b&&a<=c&&a<=d)
    return a;
    else if(b<=a&&b<=c&&b<=d)
    return b;
    else if(c<=a&&c<=b&&c<=d)
    return c;
    else if(d<=a&&d<=b&&d<=c)
    return d;
}