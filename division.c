#include <stdio.h>
int main()
{
    int M,N,K;
    int count=0;
    scanf("%d %d %d",&M,&N,&K);
    for(int i=M;i<=N;i++){
        if(i%K==0)
        count++;
    }
    printf("%d",count);
    return 0;
}