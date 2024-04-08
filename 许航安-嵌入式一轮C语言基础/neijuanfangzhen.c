#include<stdio.h>
int a[50][50];
int main()
{
    
    int i=0,j=0;
    int n,k=1;


    scanf("%d",&n);
   while (k<n * n){
while(j < n-1 && a[i][j +1]== 0){
a[i][j] = k++;j++;
}
while (i< n-1 && a[i + 1][j] == 0){
a[i][j] = k++;i++;
}
while (j> 0 && a[i][j- 1] == 0){
a[i][j] = k++;j--;
}
while (i > 0 && a[i - 1][j] == 0){
a[i][j] = k++;i--;
}

}
a[i][j]=n*n;


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%3d",a[i][j]);
        }
    printf("\n");}
    return 0;
}