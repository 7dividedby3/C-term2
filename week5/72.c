#include <stdio.h>
#include <string.h>
int main()
{
    int n;scanf("%d",&n);
    char s[100]="";
    char maxs[100]="";
    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
        if(strlen(s)>strlen(maxs))
            strcpy(maxs,s);
    }
    printf("The longest is: %s",maxs);
}
