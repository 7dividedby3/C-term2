void strmcpy( char *t, int m, char *s )
{
    int len=0;
    for(len=0;t[len]!='\0';len++);
    if(len<m)
        s[0]='\0';
    else
    {
        for(int i=m-1,j=0;i<=len;i++,j++)
            s[j]=t[i];
    }
}
