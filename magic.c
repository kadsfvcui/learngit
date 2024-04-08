#include<stdio.h>
int main() 
{ 
    int N;
    scanf("%d",&N);
    int magic[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            magic[i][j]=0;
        }
    }
    magic[0][(N-1)/2]=1;
    int i=0,j=(N-1)/2;
    int n=2;
    while(n<=N*N){
        if(magic[i-1][j+1]==0&&i-1>=0&&j+1<=N-1){
            i-=1;
            j+=1;
            magic[i][j]=n;
        }
        else if(i-1>=0&&j+1>N-1&&magic[i-1][0]==0){
            i-=1;
            j=0;
            magic[i][j]=n;
        }
        else if(i-1<0&&j+1>N-1&&magic[N-1][0]==0){
            i=N-1;
            j=0;
            magic[i][j]=n;
        }
        else if(i-1<0&&j+1<=N-1&&magic[N-1][j+1]==0){
            i=N-1;
            j+=1;
            magic[i][j]=n;
        }
        else if(magic[i+1][j]==0&&i+1<=N-1){
            i+=1;
            magic[i][j]=n;
        }
        else if(magic[0][j]==0&&i+1>N-1){
            i=0;
            magic[i][j]=n;
        }
        n++;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ",magic[i][j]);
        }
        printf("\n");
    }
    return 0; 
}