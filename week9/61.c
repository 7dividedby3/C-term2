int Locate (LinkList L, ElemType e)
{
    int rtn=1;
    LinkList p=L->next;
    while(p!=NULL)
    {
        if(p->data==e)
            return rtn;
        p=p->next;
        rtn++;
    }
    return 0;
}
