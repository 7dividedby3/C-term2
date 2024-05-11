int max_len( char *s[], int n )
{
    int maxx=0,len=0;
    for(int i=0;i<n;i++)
    {
        for(len=0;s[i][len];len++);
        maxx=len>maxx?len:maxx;
    }
    return maxx;
}
