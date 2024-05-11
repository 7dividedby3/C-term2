#define new(node,p) struct node *p=(struct node *)malloc(sizeof(struct node))
struct ListNode *createlist()
{
    int n;
    struct ListNode *head1=NULL;
    while(scanf("%d",&n)&&n!=-1)
    {
        new(ListNode,p);
        p->data=n;
        if(head1==NULL)
        {
            head1=p;
            p->next=NULL;
        }
        else
        {
            p->next=head1;
            head1=p;
        }
    }
    return head1;
}
