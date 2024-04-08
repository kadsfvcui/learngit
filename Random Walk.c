#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char board[12][12];
    int i,j;
    int flag=1;
    
    for(int i=1; i<11; i++)
        for(int j=1; j<11; j++)
            board[i][j]='.';

    for(int j=0;j<12;j++)
    {
        board[0][j]='\0';
        board[11][j]='\0';
    }

    for(int i=0;i<12;i++)
    {
        board[i][0]='\0';
        board[i][11]='\0';
    }
    
    srand((unsigned)time(NULL));

    i=1;
    j=1;
    board[i][j]='A';

    while(flag&&board[i][j]<'Z')
    {
        if(rand()%4==0&&board[i][j+1]=='.'&&j<10)
        {
            board[i][j+1]=board[i][j]+1;
            j++;
        }
        else if(rand()%4==1&&board[i][j-1]=='.'&&j>0)
        {
            board[i][j-1]=board[i][j]+1;
            j--;
        }
        else if(rand()%4==2&&board[i+1][j]=='.'&&i<10)
        {
            board[i+1][j]=board[i][j]+1;
            i++;
        }
        else if(rand()%4==3&&board[i-1][j]=='.'&&i>0)
        {
            board[i-1][j]=board[i][j]+1;
            i--;
        }
        else if(board[i+1][j]!='.'&&board[i-1][j]!='.'&&board[i][j+1]!='.'&&board[i][j-1]!='.')
        flag=0;
        else
        continue;
    }
    
    for(int i=1; i<11; i++)
        {
            for(int j=1; j<11; j++)
            printf("%c",board[i][j]);
            printf("\n");
        }

    return 0;
}