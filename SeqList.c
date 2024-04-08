#include <stdio.h>
#define MAXSIZE 100        /*顺序表最大长度*/
#define OK 1
#define ERROR 0

typedef struct 
{
    int elem[MAXSIZE];     /*定义数组存储数据*/
    int last;              /*最后一个元素下标*/
}SeqList;

void InitList(SeqList *L,int a[],int n)    /*顺序表初始化*/
{
    for(int i=0;i<n;i++)
    {
        L->elem[i]=a[i];
    }
    L->last=n-1;
}

int Locate(SeqList L,int e)  /*查找一个元素*/
{
    int i=0;

    while(i<L.last&&L.elem[i]!=e)   /*遍历顺序表查找元素*/
    {
        i++;
    }
    if(i<=L.last)
    return (i+1);    /*若找到，返回该元素在表中序号*/
    else 
    return(-1);      /*若未找到，返回空序号*/
}

int InsList(SeqList *L,int i,int e)    /*在表中指定位置插入一个元素*/
{
    if(i<1||i>L->last+2)    /*判断要插入的序号是否小于0或超出表长*/
    {
        printf("插入位置不合法");
        return ERROR;
    }
    if(L->last>=MAXSIZE)    /*判断表是否已满*/
    {
        printf("表已满，无法插入");
        return ERROR;
    }
    for(int k=L->last+1;k>=i;k--)    /*插入序号以后的元素为插入元素后移*/
    {
        L->elem[k]=L->elem[k-1];
    }
    L->elem[i-1]=e;
    L->last++;    /*表长+1*/
    return OK;
}

int DelList(SeqList *L,int i,int *e)    /*删除表中指定位置元素*/
{
    if(i<1||i>L->last+1)    /*判断要删除的序号是否小于0或超出表长*/
    {
        printf("删除位置不合法");
        return ERROR;
    }
    *e=L->elem[i-1];    /*将删除的元素通过指针e返回*/
    for(int k=i-1;k<L->last;k++)    /*删除元素序号以后的元素前移*/
    {
        L->elem[k]=L->elem[k+1];
    }
    L->last--;    /*表长-1*/
    return OK;
}

void mergeList(SeqList *LA,SeqList *LB,SeqList *LC)    /*将两个非递减顺序表合并为一个非递减顺序表*/
{
    int i=0;
    int j=0;
    int k=0;
    while(i<LA->last&&j<LB->last)    /*A、B表均有剩余元素*/
    {
        if(LA->elem[i]<=LB->elem[j])
        {
            LC->elem[k]=LA->elem[i];
            i++;k++;
        }
        else 
        {
            LC->elem[k]=LB->elem[j];
            j++;k++;
        }
    }
    while(i<=LA->last&&j>LB->last)    /*A表有剩余元素，B表无剩余元素*/
    {
        LC->elem[k]=LA->elem[i];
        i++;k++;
    }
    while(i>LA->last&&j<=LB->last)    /*A表无剩余元素，B表有剩余元素*/
    {
        LC->elem[k]=LB->elem[j];
        j++;k++;
    }
    LC->last=LA->last+LB->last+1;
}

int main()
{
    SeqList List;
    return 0;
}