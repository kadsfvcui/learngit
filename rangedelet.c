#include <stdio.h>
#include <stdlib.h>

struct _lnklist{
    char data;
    struct _lnklist *next;
};
typedef struct _lnklist Node;
typedef struct _lnklist *LinkList;

void lnk_del_x2y(LinkList L, int mink, int maxk) {
    Node *p,*q;
    p = L;
    int count = 0;
    while(count<mink)
    {
        p = p->next;
        count++;
        if(count == mink)
        {
            q = p->next->next;
            count +=2;
            while(count<=maxk)
            {
                free(p->next);
                p->next = q;
                q = q->next;
                count++;
            }
        }
    }
}

int main()
{
    int a=0;
    return 0;
}