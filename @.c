#include<stdio.h>
int main()
{
    int a=0,b=0,c=0;
    char e;
    while((e=getchar())!='@')
    {
        if(e=='{'||e=='}')
        a++;
        else if(e=='['||e==']')
        b++;
        else if(e=='('||e==')')
        c++;
        else
        continue;
    }
    printf("{个数：%d\n[个数：%d\n(个数：%d\n",a,b,c);
    if(a==b&&b==c)
    printf("NULL");
    return 0;
}