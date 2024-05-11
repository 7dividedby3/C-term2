#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int a,t=0;
    while(t!=2)
    {
        cin>>a;
        if(a==0)t++;
        else v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(auto it:v)
        cout<<it<<" ";
}
