#include <stdio.h>
int arrqzh[10];
void fillarrqzh()
{
    arrqzh[1]=1;
    for(int i=2;i<=9;i++)
    {
        arrqzh[i]=arrqzh[i-1]*10+1;
    }
    int sum=0;
    for(int i=1;i<=9;i++)
    {
        sum+=arrqzh[i];
        arrqzh[i]=sum;
    }
}
int main()
{
    int a,b;
    fillarrqzh();
    scanf("%d %d",&a,&b);
    printf("s = %d",a*arrqzh[b]);
}
