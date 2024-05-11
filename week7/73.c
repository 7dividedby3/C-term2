#include <stdio.h>
struct stru{char dm[21];long double price[100];int cnt;};
int mycmp(struct stru a,struct stru b)  //cmp函数 小的1 大的0
{
    if(a.cnt!=b.cnt)
        return a.cnt>b.cnt;
    else
        for(int i=0;a.dm[i]!='\0';i++)
            if(a.dm[i]!=b.dm[i])
                return a.dm[i]<b.dm[i];
}
void myswap(struct stru *a,struct stru *b) //结构体交换
{
    struct stru temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int m,n;scanf("%d %d",&m,&n);
        struct stru sd[m];
        for(int i=0;i<m;i++)
        {
            scanf("%s",sd[i].dm);
            sd[i].cnt=0;
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                scanf("%Lf",&sd[i].price[j]);
        for(int j=0;j<n;j++)
        {
            long double minn=1e9;
            for(int i=0;i<m;i++)
                if(sd[i].price[j]<minn)
                    minn=sd[i].price[j];
            for(int i=0;i<m;i++)
                if(sd[i].price[j]==minn)
                    sd[i].cnt++;
        }
        for(int i=0;i<m;i++) //排序
            for(int j=i+1;j<m;j++)
                if(mycmp(sd[i],sd[j])==0)
                    myswap(&sd[i],&sd[j]);
        for(int i=0;i<m;i++)
            printf("%s %d\n",sd[i].dm,sd[i].cnt);
    }
}
