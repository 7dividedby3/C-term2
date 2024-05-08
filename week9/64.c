List Insert(List L, ElementType X)
{
    struct Node *NodeX=(struct Node *)malloc(sizeof(struct Node)),*p=L->Next,*pback=L;
    NodeX->Data=X;
    NodeX->Next=NULL;
    while(1)
    {
        if(p==NULL||p->Data>X)
        {
            pback->Next=NodeX;
            NodeX->Next=p;
            return L;
        }
        pback=p;
        p=p->Next;
    }
}
