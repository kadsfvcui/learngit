#include<stdio.h>
int main()
{
    
    char a;
    printf("Enter phone number:");
    
    while((a=getchar())!='\n')
    {
        if(a>='A'&&a<='C')
        printf("%d",2);
        else if(a>='D'&&a<='F')
        printf("%d",3);
        else if(a>='G'&&a<='I')
        printf("%d",4);
        else if(a>='J'&&a<='L')
        printf("%d",5);
        else if(a>='M'&&a<='O')
        printf("%d",6);
        else if(a>='P'&&a<='S')
        printf("%d",7);
        else if(a>='T'&&a<='V')
        printf("%d",8);
        else if(a>='W'&&a<='Z')
        printf("%d",9);
        else printf("%c",a);
        

    }
    return 0;
}
