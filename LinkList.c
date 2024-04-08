#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0

typedef struct Node
{
    char data;
    struct Node *next;
}Node,*LinkList;

void LinkList_Init(LinkList *L)
{
    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;
}

void CreatFromHead(LinkList L)
{
    Node *s;
    char c;
    int flag = 1;
    while(1)
    {
        if(c = getchar()!='$')
        {
            s = (Node*)malloc(sizeof(Node));
            s->data = c;
            s->next = L->next;
            L->next = s;
        }
        else flag = 0;
    }
}

void CreateFromTail(LinkList L)
{
    Node *s,*r;
    r = L;
    char c;
    int flag = 1;
    while(flag)
    {
        if(c = getchar()!='$')
        {
            s = (Node*)malloc(sizeof(Node));
            s->data = c;
            r->next = s;
            r = s;
        }
        else
        {
            flag = 0;
            s->next = NULL;
        }
    }
}

Node *Get(LinkList L,int i)
{
    Node *p;
    int j = 0;
    p = L;
    while(p->next!=NULL&&j<i)
    {
         j++;
         p = p->next;
    }
    if(j==i)
        return p;
    else return NULL;
}

Node *Locate(LinkList L,char s)
{
    Node *p;
    p = L;
    while(p->next!=NULL&&p->data!=s)
        p = p->next;
    if(p->data==s)
        return p;
    else return NULL;
}

int ListLength(LinkList L)
{
    Node *p;
    p = L;
    int Len=0;
    while(p->next!=NULL)
    {
        Len++;
        p = p->next;
    }
    return Len;
}

void InsList(LinkList L,int i,char e)
{
    Node *p,*s;
    int count = 0;
    if(i<=0)
        return ERROR;
    p = L;
    while(count<i-1&&p!=NULL)
    {
        p = p->next;
        count++;
    }
    if(p==NULL)
    {
        printf("插入位置不合理");
        return ERROR;
    }
    s = (Node*)malloc(sizeof(Node));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

int DelList(LinkList L,int i,char *e)
{
    Node *p,*s;
    int count = 0;
    if(i<=0)
        return ERROR;
    p = L;
    while(count<i-1&&p->next!=NULL)
    {
        p = p->next;
        count++;
    }
    if(p==NULL)
    {
        printf("删除位置不合法");
        return ERROR;
    }
    s = p->next;
    *e = s->data;
    p->next = s->next;
    free(s);
    return OK;
}

LinkList MergeList(LinkList LA,LinkList LB)
{
    Node *pa,*pb,*r;
    LinkList LC;
    LC = LA;
    LC->next = NULL;
    r = LC;
    pa = LA->next;
    pb = LB->next;
    while(pa!=NULL&&pb!=NULL)
    {
        if(pa->data>=pb->data)
        {
            r->next = pa;
            pa = pa->next;
        }
        else
        {
            r->next = pb;
            pb = pb->next;
        }
        r = r->next;
    }
    if(pa!=NULL)
        r->next = pa;
    else
        r->next = pb;
    free(LB);
    return(LC);
}

void CLinkList(LinkList *CL)
{
    *CL = (LinkList)malloc(sizeof(Node));
    (*CL)->next = *CL;
}

void CreateCLinkList(LinkList CL)
{
    Node *s,*rear;
    char c;
    rear = CL;
    c = getchar();
    while(c!='$')
    {
        s = (Node*)malloc(sizeof(Node));
        s->data = c;
        rear->next = s;
        rear = s;
        c = getchar();
    }
    rear->next = CL;
}

LinkList merge_1(LinkList LA,LinkList LB)
{
    Node *p,*q;
    p = LA;
    q = LB;
    while(p->next!=LA)
        p = p->next;
    while(q->next!=LB)
        q = q->next;
    p->next = q->next->next;
    q->next = LA;
    free(LB);
    return LA;
}

LinkList merge_2(LinkList RA,LinkList RB)
{
    Node *p;
    p = RA->next;
    RA->next = RB->next->next;
    free(RB->next);
    RB->next = p;
    return RB;
}
