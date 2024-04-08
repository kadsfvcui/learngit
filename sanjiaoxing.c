#include<stdio.h>
int main(){
    int a,b,c;
    printf("请输入三角形三边长：");
    scanf("%d %d %d",&a,&b,&c);
    int m=a*a;
    int n=b*b;
    int q=c*c;
    if(a+b>c&&a-b<c){
        if(m+n==q||m+q==n||n+q==m){
            printf("Right triangle\n");
        }else if(m+n>q&&m+q>n&&n+q>m){
            printf("Acute triangle\n");
        }else {
            printf("Obtuse triangle\n");
        }
        if(a==b||a==c||b==c){
            printf("Isoceles triangle\n");
        }
        if(a==b&&b==c){
            printf("Equliteral triangle\n");
        }
    }
    else{
        printf("Not triangle\n");
    }
}