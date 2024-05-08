void ListReverse_L(LinkList &L)
{
    for(LinkList p=L->next,pback=NULL,pnext;p!=NULL;pnext=p->next,p->next=pback,pback=p,p=pnext)
        if(p->next==NULL)
            L->next=p;
}
