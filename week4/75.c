#include <stdio.h>
#include <string.h>
int main()
{
    char s[114];
    int n;
    scanf("%s %d",s,&n);
    unsigned n2=(unsigned)n;
    char an[114];
    int ans=0;
    for(int i=0;i<strlen(s);i++)
    {
        an[i]=n2%4+'A';
        n2/=4;
        if(an[i]==s[i])
            ans++;
    }
    printf("%d",ans);
}
