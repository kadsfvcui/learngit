#include<stdio.h>
int main() 
{ 
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    a[1][0]=a[2][0]=a[2][1]=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d ",a[i][j]);
    }
    return 0; 
}