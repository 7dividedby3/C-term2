#include <stdio.h>
int cmp(const void * a, const void * b)
{
    return ( *(char*)a - *(char*)b );
}
int main()
{
    char s[114514];
    gets(s);
    int n=strlen(s);
    qsort(s,n,sizeof(char),cmp);
    printf("%c",s[0]);
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])
            printf("%c",s[i]);
    }
}
