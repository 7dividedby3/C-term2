#include <bits/stdc++.h>
using namespace std;
struct weibo
{
    int fa;
    int k;
    set<int> ti;
}wb[10001];

int cnt[101];
vector<int> tiren;
int main()
{
    int n;cin>>n;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>wb[i].fa>>wb[i].k;
        for(int j=0;j<wb[i].k;j++)
        {
            cin>>temp;
            wb[i].ti.insert(temp);
            cnt[temp]++;
        }
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<wb[i].fa<<" ";
        for(int j=0;j<wb[i].ti.size();j++)
            cout<<wb[i].ti[j]<<" ";
        cout<<"\n";
    }*/
    int maxele=max_element(cnt+1,cnt+101)-cnt;
    cout<<maxele<<"\n";
    for(int i=0;i<n;i++)
    {
        if(wb[i].ti.find(maxele)!=wb[i].ti.end())
        {
             tiren.push_back(wb[i].fa);
        }
    }
    sort(tiren.begin(),tiren.end());
    for(int i=0;i<tiren.size();i++)
    {
        cout<<tiren[i]<<" "[i==tiren.size()-1];
    }
}
