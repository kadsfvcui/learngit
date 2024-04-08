#include<stdio.h>
int main() 
{ 
    char N[100];
    gets_s(N,100);
    for(int i=0;N[i]!='\0';i++){
        if(N[i]=='0')
        N[i]='5';
    }
    printf("%s",N);
    return 0;
}