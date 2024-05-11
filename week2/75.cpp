#include <bits/stdc++.h>
#define Android ios::sync_with_stdio(false),cin.tie(nullptr)  
#define endl "\n"
using namespace std;
using LL=long long;
int a[7][7];
void checkandian(int *y,int *x,int n)
{
    bool hangzuida=0;
    bool liezuixiao=0;
    for(int iy=0;iy<n;iy++)
        for(int ix=0;ix<n;ix++)
        {
            liezuixiao=1;
            for(int jy=0;jy<n;jy++)
                if(a[iy][ix]>a[jy][ix])
                    liezuixiao=0;
            hangzuida=1;
            for(int jx=0;jx<n;jx++)
                if(a[iy][ix]<a[iy][jx])
                    hangzuida=0;
            if(hangzuida&&liezuixiao)
            {
                *y=iy;
                *x=ix;
                return;
            }
        }
}
int main()
{
    int n;cin>>n;
    for(int y=0;y<n;y++)for(int x=0;x<n;x++)cin>>a[y][x];
    int y=7,x=7;
    checkandian(&y,&x,n);
    if(y==7&&x==7)cout<<"NONE";
    else cout<<y<<" "<<x;
    }
