#include <bits/stdc++.h>
using namespace std;
int a[7];
int main()
{
    int m,n;
    cin>>m>>n;
    m=m%n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<n;j++)
        {
            cout<<a[(j-m+n)%n]<<" ";
        }
        cout<<"\n";
    }
}
