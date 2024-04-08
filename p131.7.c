#include <stdio.h>

int main()
{
    int n;
    int total1=0;
    int total2=0;

    scanf("%d",&n);

    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        total1+=a[i][i];
        total2+=a[i][n-1-i];
    }

    printf("%d %d",total1, total2);

    return 0;
}