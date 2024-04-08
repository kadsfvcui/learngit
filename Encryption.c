/*加密*/
#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    char a[100];
    printf("Enter message to be encrypted:");

    fgets(a,100,stdin);
    
    printf("Enter shift amount (1-25):");
    scanf("%d",&n);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            if(a[i]+n>'z')
            a[i]=a[i]+n-26;
            else
            a[i]=a[i]+n;
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            if(a[i]+n>'Z')
            a[i]=a[i]+n-26;
            else
            a[i]=a[i]+n;
        }
        else
        a[i]=a[i];
    }
    
    printf("Encrypted message:");

    for(i=0;i<strlen(a);i++)
    printf("%c",a[i]);
    
    return 0;
}