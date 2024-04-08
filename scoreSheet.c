#include <stdio.h>
#define NUM_STUDENT 5
#define NUM_GRADES 5

int main()
{
    int scoreSheet[NUM_STUDENT][NUM_GRADES];
    int total,highest,lowest,flag;
    float average;

    for(int i=0;i<NUM_STUDENT;i++){              /*录入每个学生成绩*/
        printf("Enter grades of student %d:",i+1);
        for(int j=0;j<NUM_GRADES;j++){
            scanf("%d",&scoreSheet[i][j]);
        }
    }

    for(int i=0;i<NUM_STUDENT;i++){            /*计算每个学生总成绩和平均成绩*/
        total=average=0;                         
        for(int j=0;j<NUM_GRADES;j++){
            total+=scoreSheet[i][j];
        }
        average=total/NUM_STUDENT;
        printf("Total grades of student %d:%d:\n",i+1,total);
        printf("Average grades of student %d:%.2f\n",i+1,average);
    }

    for(int i=0;i<NUM_GRADES;i++){             /*计算每门课最高分和最低分*/
        highest=lowest=0;
        flag=1;              
        for(int j=0;j<NUM_STUDENT-1;j++){
            if(flag==1){
                if(scoreSheet[j][i]<scoreSheet[j+1][i]){
                    highest=scoreSheet[j+1][i];
                    lowest=scoreSheet[j][i];
                }
            else{
                    highest=scoreSheet[j][i];
                    lowest=scoreSheet[j+1][i];
                }
                flag=0;
                continue;
            }
            if(highest<scoreSheet[j+1][i]){
                highest=scoreSheet[j+1][i];
            }
            else if (lowest>scoreSheet[j+1][i]){
                lowest=scoreSheet[j+1][i];
            }
        }
        printf("\nHighest score of course %d:%d",i+1,highest);
        printf("\nLowest score of course %d:%d",i+1,lowest);
        
    }

    return 0;
}