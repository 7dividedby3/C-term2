#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    int c=0,k=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==0)
            {
                for(c=0;a[i+1][j+1+c]!=0;c++);
                for(k=0;a[i+1+k][j+1]!=0;k++);
                cout<<c*k;
                return 0;
            }
}
