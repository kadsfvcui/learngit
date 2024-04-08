#include<stdio.h>
int main() 
{ 
    int head,tail;
    int flag=1;
    scanf("%d %d",&head,&tail);
    for(int i=head;i<=tail;i++){
        if(i==1||i==2)
        continue;
        flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%d ",i);
    }
    return 0; 
}