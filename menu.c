#include<stdio.h>
int main()
{
    int a,b,c,d,n1,n2,n3,n4,n5;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    n1=((a/2)<b?(a/2):b)<d/2?((a/2)<b?(a/2):b):d/2;
    a-=2*n1;
    b-=n1;
    d-=2*n1;

    n2=((a<b?a:b)<c?(a<b?a:b):c)<d?((a<b?a:b)<c?(a<b?a:b):c):d;
    a-=n2;
    b-=n2;
    c-=n2;
    d-=n2;

    n3=(c/2)<d?(c/2):c;
    c-=2*n3;
    d-=n3;

    n4=b/3;
    b-=3*n4;

    n5=a<d?a:d;

    printf("%d\n%d\n%d\n%d\n%d\n",n1,n2,n3,n4,n5);
    return 0;
}

