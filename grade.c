/*将百分制转换为等级制*/

#include<stdio.h>
int main()
{
    int numerical_grade,m;
     
    printf("Enter numerical grade:");
    scanf("%d",&numerical_grade);
    m=numerical_grade/10;
    if(numerical_grade>100||numerical_grade<0){
        printf("Error, grade must be between 0 and 100.");
        
        }else{
       
        switch(m)
        {
        case 10:
        case 9:printf("Letter grade:A");
        break;
        case 8:printf("Letter grade:B");
        break;
        case 7:printf("Letter grade:C");
        break;
        case 6:printf("Letter grade:D");
        break;
        default:
        printf("Letter grade:F");
        break;
   }}
    return 0;
    }
   



