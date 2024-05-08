List Merge( List L1, List L2 )
{
    List L=(List)malloc(sizeof(struct Node)),p1=L1->Next,p2=L2->Next,p=L;
    while(p1!=NULL||p2!=NULL)
    {
        if(p1==NULL){p->Next=p2;p2=p2->Next;}
        else if(p2==NULL){p->Next=p1;p1=p1->Next;}
        else if(p1->Data<=p2->Data){p->Next=p1;p1=p1->Next;}
        else if(p1->Data>p2->Data){p->Next=p2;p2=p2->Next;}
        p=p->Next;
    }
    L1->Next=NULL;
    L2->Next=NULL;
    return L;
}
