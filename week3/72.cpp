#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m;
    int n;cin>>n;
    int a,b;
    int maxx=0,maxxx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        m[a]++;
        if(m[a]>maxx)
        {
            maxxx=a;
            maxx=m[a];
        }
    }
    cout<<maxxx<<" "<<maxx;
}
