#include <stdio.h>
int main()
{
    char a[100];
    int i=0;

    while((a[i]=getchar())!='\n')
    i++;
   
    for(int i=99;i>=0;i--)
    {
        if(a[i]!='\n')
    continue;
    for(int j=i-1;j>=0;j--)
    {
        putchar(a[j]);
    }
    break;
    }
    return 0;
}