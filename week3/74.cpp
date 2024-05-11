#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int a[20],b[20];
    int n1,n2;
    cin>>n1;
    for(int i=0;i<n1;i++)cin>>a[i];
    cin>>n2;
    for(int i=0;i<n2;i++)cin>>b[i];
    bool c=1;
    bool d=1;
    for(int i=0;i<n1;i++)
    {
        c=1;
        for(int j=0;j<n2;j++)
            if(a[i]==b[j])
            {
                c=0;break;
            }
        if(c)
        {
            d=1;
            for(int k=0;k<v.size();k++)
                if(a[i]==v[k])
                {
                    d=0;break;
                }
            if(d)v.push_back(a[i]);
        }
    }
    
    for(int j=0;j<n2;j++)
    {
        c=1;
        for(int i=0;i<n1;i++)
            if(a[i]==b[j])
            {
                c=0;break;
            }
        if(c)
        {
            d=1;
            for(int k=0;k<v.size();k++)
                if(b[j]==v[k])
                {
                    d=0;break;
                }
            if(d)v.push_back(b[j]);
        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" "[i==v.size()-1];
}
