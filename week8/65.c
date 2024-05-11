#define new(node,p) struct node *p=(struct node *)malloc(sizeof(struct node))
void input()
{
    int n1;char n2[20];int n3;
    while(scanf("%d %s %d",&n1,n2,&n3)&&n1!=0)
    {
        new(stud_node,p);
        p->num=n1;
        strcpy(p->name,n2);
        p->score=n3;
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
}
