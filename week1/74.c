#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long
int a[100000]={};
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i=0;i<=100000;i++)
    {
        a[i]+=a[i-1];
        if((i%10)==8||(i%100)/10==8||(i%1000)/100==8||(i%10000)/1000==8||(i%100000)/10000==8)
            a[i]++;
        
    }
    //for(int i=0;i<1000;i++)printf("%d ",a[i]);
    printf("%d",a[y]-a[x-1]);
}
