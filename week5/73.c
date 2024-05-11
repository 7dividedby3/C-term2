#include <stdio.h>
#include <string.h>
char s[100][10];
void swap(char a[100],char b[100])
{
    char temp[100];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}
int main()
{
    int n=0;
    while(1)
    {
        gets(s[n]);
        if(s[n][0]=='#')break;
        n++;
    }
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++)
            if(strlen(s[i])>strlen(s[j]))
                swap(s[i],s[j]);
    for(int i=0;i<n;i++)
        printf("%s ",s[i]);
}
