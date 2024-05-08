void DelNode_Link(LinkList head,int deldata)
{
    struct Node *pfront,*p=head;
    while(p!=NULL)
    {
        if(p->data==deldata)
        {
            if(p==head)
                head=p->next;
            else
                pfront->next=p->next;
            return;
        }
        pfront=p;
        p=p->next;
    }
    printf("not exist %d\n",deldata);
}
