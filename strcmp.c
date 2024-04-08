#include <stdio.h>
#include <stdlib.h>

int str_compare(const char* ptr1, const char* ptr2){
    while(*ptr1!='\0'&&*ptr2!='\0')
    {
        if(*ptr1>='a'&&*ptr1<='z')
        {
            if(*ptr2>='A'&&*ptr2<='Z')
            {
                if(*ptr1<*ptr2+32)
                    return -1;
                else if(*ptr2>*ptr2+32)
                    return 1;
                else
                {
                    *ptr1++;
                    *ptr2++; 
                    continue;
                }
            }
        }
        if(*ptr1>='A'&&*ptr1<='Z')
        {
            if(*ptr2>='a'&&*ptr2<='z')
            {
                if(*ptr1<*ptr2-32)
                    return -1;
                if(*ptr1>*ptr2-32)
                    return 1;
                else
                {
                    *ptr1++;
                    *ptr2++; 
                    continue;
                }
            }
        }
        if(*ptr1<*ptr2)
            return -1;
        if(*ptr1>*ptr2)
            return 1;
        *ptr1++;
        *ptr2++; 
    }
    if(*ptr1!='\0')
        return 1;
    else if(*ptr2!='\0')
        return -1;
    else
        return 0;
}

int main()
{
    char ptr1[25]="ccI7PKCHPVOs2tm8PSio7ppi",
    ptr2[25]="ccI7PKCHPVOs2tm8PSIO7PPI";
    int a;
    a = str_compare(&ptr1,&ptr2);
}