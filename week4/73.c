#include <stdio.h>
char s[33];
int ip(int n)
{
    int ans=0;
    for(int i=8*n;i<8*n+8;i++)
    {
        ans*=2;
        ans+=s[i]-'0';
    }
    return ans;
}
int main()
{
    scanf("%s",s);
    printf("%d.%d.%d.%d",ip(0),ip(1),ip(2),ip(3));
}
