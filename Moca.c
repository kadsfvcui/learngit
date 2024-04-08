#include<stdio.h>
int main()
{
    int n,i;
    
    scanf("%d",&n);
    int score=0;
    int combo=0;
    char judgment;
    
    for(i=0;i<n;i++){
        getchar();/*清空输入缓冲区中的回车符*/
        scanf("%c",&judgment);
        if(judgment=='p'){
            score+=300;
            combo++;
        }
        else if(judgment=='g'){
            score+=208;
            combo++;
        }
        else if(judgment=='b')
            score+=105;
            
        else 
            score+=0;
            
            
        
    }
    printf("%d\n",score);
    printf("%d\n",combo);
    if (score==300*n)
    printf("All Perfect!");
    else if("score>=208*n")
    printf("Full Combo!");
    else 
    printf("Moca Complete!");
    return 0;

}