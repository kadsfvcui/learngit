#include <stdio.h>
int main()
{
    int total,num_2,num_3,n,result;
    scanf("%d",&n);
    int coin[n];
    total=num_2=num_3=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&coin[i]);
        total+=coin[i];
        if(coin[i]==2)
        num_2++;
        else if(coin[i]==3)
        num_3++;
    }
    if(total%2!=0){
        printf("NO");
        return 0;
    }
    
    total/=2;
    
    for(int i=0;i<=num_2&&2*i<=total;i++){
        int rest=total-2*i;
        if(rest%3==0&&rest/3<=num_3){
            printf("YES");
            return 0;
        }
    }
    
    printf("NO");

    return 0;
}