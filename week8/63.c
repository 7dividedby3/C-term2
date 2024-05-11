int Length ( LinkList L )
{
    if(L==NULL)return 0;
    int len=0;
    while(L->next!=NULL)
    {
        len++;
        L=L->next;
    }
    return len;
}
