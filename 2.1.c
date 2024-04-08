#include<stdio.h>
int main()
{
    int n,i,j,p,q;
    scanf("%d",&n);
    int a[n][n];
    
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
       

    p=a[0][0];
    q=a[0][0];

    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       {
           if(p<=a[i][j])
           p=a[i][j];
           
          if(q>=a[i][j])
           q=a[i][j];
        }

    printf("%d %d",p,q);
       
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       {
        if(a[i][j]!=a[j][i])
        {
            printf(" NO");
            return 0;
        }
       }
    
    printf(" YES");
       
    return 0;
}