#include <stdio.h>
#include <string.h>

int main()
{
    char a[100][21];
    char temp[100];
    int k;

    for(k=0;strlen(a[k-1])!=4;k++){
        scanf("%s",&a[k]);
    }
    
    for(int i=0;i<k-1;i++){
        for(int j=0;j<k-1-i;j++){
            if(strcmp(a[j],a[j+1])>0){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    
    printf("\n");
    printf("Smallest word:%s\n",a[0]);
    printf("Largest word:%s",a[k-1]);
    printf("\n");

    return 0;
}