#include <stdio.h>
#include <stdlib.h>
#define new(node,p) struct node *p=(struct node *)malloc(sizeof(struct node))
struct Node{int value;struct Node *next;}*head,*tail;
int main()
{
    head=NULL;
    tail=NULL;
    int n,t;scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        new(Node,p);
        scanf("%d",&n);
        p->value=n;
        p->next=NULL;
        if(head==NULL&&tail==NULL)
        {
            head=p;
            tail=p;
        }
        else
        {
            tail->next=p;
            tail=p;
        }
    }
    struct Node *p=head;
    for(int i=0;i<t;i++)
    {
        printf("%d",p->value);
        if(i<t-1)printf(" ");
        p=p->next;
    }
    printf("\n");
    return 0;
}
