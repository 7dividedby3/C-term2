#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum-*max_element(a,a+10)-*min_element(a,a+10);
    cout<<sum;
}
