#include<stdio.h>
#include<string.h>

int main() 
{ 
    char A[20],B[20];
    int count=1;
    scanf("%s",&A);
    scanf("%s",&B);
for(int i=0;i<strlen(A);i++){
    if(A[i]=='1'&&B[i]=='0')
    count*=2;
    else if(A[i]=='0'&&B[i]=='1'){
        count=0;
        break;
    }
}

printf("%d",count);
    return 0; 
}