char *search( char *s, char *t )
{
    char *ans=NULL;
    int ls=0,lt=0;
    for(ls=0;s[ls]!='\0';ls++);
    for(lt=0;t[lt]!='\0';lt++);
    for(int i=0;i<ls;i++)
    {
        int find=1;
        for(int j=0;j<lt;j++)
        {
            if(s[i+j]!=t[j])
            {
                find=0;
                break;
            }
        }
        //printf("%d ",find);
        if(find)
        {
            ans=s+i;
            break;
        }
    }
    return ans;
}
