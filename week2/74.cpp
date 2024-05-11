#include <bits/stdc++.h>
using namespace std;
vector<int> maxdigit;
int cnt[10];

void digit(string n)
{
    for(int i=0;i<n.size();i++)
    {
        cnt[n[i]-'0']++;
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string temp;
        cin>>temp;
        digit(temp);
    }
    int maxele=*max_element(cnt,cnt+10);
    cout<<maxele<<": ";
    for(int i=0;i<10;i++)
    {
        if(cnt[i]==maxele)
            maxdigit.push_back(i);
    }
    int n=maxdigit.size();
    for(int i=0;i<n;i++)
        cout<<maxdigit[i]<<" "[i==n-1];
}
