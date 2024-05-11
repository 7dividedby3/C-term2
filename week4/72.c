#include <stdio.h>
#include <string.h>
int main()
{
    char s[114514];
    scanf("%s",s);
    int hex[114514];
    int sign=1;
    long long ans=0;
    int hi=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(!hi&&s[i]=='-')
            sign=-1;
        else if(s[i]>='0'&&s[i]<='9')
        {
            hex[hi]=s[i]-'0';
            hi++;
        }
        else if(tolower(s[i])>='a'&&tolower(s[i])<='f')
        {
            hex[hi]=tolower(s[i])-'a'+10;
            hi++;
        }
    }
    for(int i=0;i<hi;i++)
    {
        ans*=16;
        ans+=hex[i];
    }
    ans*=sign;
    printf("%lld",ans);
}
