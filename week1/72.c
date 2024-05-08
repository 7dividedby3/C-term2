#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long
double factor[26];
void fac(void)
{
    factor[0]=1.0;
    factor[1]=1.0;
    for(int i=2;i<=26;i++)
    {
        factor[i]=factor[i-1]*i;
    }
}
int main()
{
    double x;
    scanf("%lf",&x);
    int i=0;
    double rtn=0.0;
    double temp=0.0;
    fac();
    while(1)
    {
        temp=pow(x,i)/factor[i];
        rtn=rtn+temp;
        if(fabs(temp)<0.00001)break;
        i++;
    }
    printf("%.4f",rtn);
}
