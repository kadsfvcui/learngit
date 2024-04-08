/*偶数平方*/

#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);

    for(i=1;2*i*2*i<n+1;i++)
    printf("%d\n",2*i*2*i);
    
    return 0;
}