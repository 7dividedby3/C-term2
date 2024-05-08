#include <stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int cnt=0;
    for(int f5=n/5;f5>=1;f5--)
    {
        for(int f2=(n-5*f5)/2;f2>=1;f2--)
        {
            int f1=n-(5*f5)-(2*f2);
            if(f1<1)continue;
            printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",f5,f2,f1,f5+f2+f1);
            cnt++;
        }
    }
    printf("count = %d\n",cnt);
}
