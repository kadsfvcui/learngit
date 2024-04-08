#include<stdio.h>
#include<string.h>
int main() 
{ 
    char str[1000000];
    scanf("%s",str);
    int coun1=0;
    int coun2=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a'&&str[i]<='z')
        coun1++;
        else coun2++;
    }
    for(int i=0;i<strlen(str);i++){
        if(coun1>coun2){
            if(str[i]>='A'&&str[i]<='Z')
                str[i]+=32;
        }
        else if(coun1<coun2){
            if(str[i]>='a'&&str[i]<='z')
                str[i]-=32;
        }
    }
    for(int i=0;i<strlen(str);i++)
        putchar(str[i]);
    return 0; 
}