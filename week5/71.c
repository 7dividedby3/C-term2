#include <stdio.h>
#include <string.h>
int checkchar(char c)
{
    if (c == '.')
        return 4;
    if (c >= '0' && c <= '9')
        return 1;
    if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
        return 2;
    return 3;
}
void solve()
{
    char s[114];
    gets(s);
    int a[10]={0};
    for(int i=0;i<strlen(s);i++)
        a[checkchar(s[i])]++;
    if (strlen(s)<6)
        printf("Your password is tai duan le.\n");
    else if (a[3])
        printf("Your password is tai luan le.\n");
    else if (a[1]&&a[2])
        printf("Your password is wan mei.\n");
    else if (!a[1]&&a[2])
        printf("Your password needs shu zi.\n");
    else if (a[1]&&!a[2])
        printf("Your password needs zi mu.\n");
}
int main()
{
    int t;scanf("%d",&t);
    getchar();
    while(t--)solve();return 0;
}
