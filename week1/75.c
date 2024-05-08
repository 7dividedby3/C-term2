#include <stdio.h>
#include <math.h>
int dengcha(int n)
{return n*(n+1)/2;}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
        if((dengcha(i)<=n)&&(dengcha(i+1)>n))
           break;
    int cha=n-dengcha(i);
    int sum=0;
    for(int j=1;j<=i;j++)
        sum+=j*j;
    sum+=(i+1)*cha;
    printf("%d",sum);
}
