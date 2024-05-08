#include <stdio.h>
double price[5]={0,3.00,2.50,4.10,10.20};
int main()
{
    int t=5;
    int a;
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    while(t--)
    {
        scanf("%d",&a);
        if(a==0)return 0;
        printf("price = ");
        if(a>=1&&a<=4)printf("%.2f",price[a]);
        else printf("0.00");
        printf("\n");
    }
    return 0;
}
