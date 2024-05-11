#include <stdio.h>
int max(int a,int b){return a>b?a:b;}
int main()
{
    char s[114];
    int maxx=0;
    while(gets(s)!=NULL)
    {
        int cnt[128]={};
        int maxx=0;
        for(int i=0;i<strlen(s);i++)
            if(s[i]>='A'&&s[i]<='z')
            {
                cnt[s[i]]++;
                maxx=max(maxx,cnt[s[i]]);
            }
        for(char i='A';i<='z';i++)
            if(cnt[i]==maxx)
            {
                printf("%c %d\n",i,maxx);
                break;
            }
    }
}
