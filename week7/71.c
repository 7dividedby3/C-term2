#include <stdio.h>
int main()
{
    int t;scanf("%d",&t);
    int youwenti=0;
    char isbn[11];
    while(t--)
    {
        int sum=0;
        scanf("%s",isbn);
        for(int i=0;i<10;i++)
            if(isbn[i]=='X'&&i==9)
                sum+=(i+1)*10;
            else if(isbn[i]>='0'&&isbn[i]<='9')
                sum+=(i+1)*(isbn[i]-'0');
            else {sum=-1;break;}
        if(sum%11)
            youwenti+=printf("%s\n",isbn);
    }
    if(!youwenti)
        printf("All passed");
    return 0;
}
