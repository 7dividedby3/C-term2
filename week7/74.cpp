#include <bits/stdc++.h>
using namespace std;
struct s{string id;int age;}br[101];
bool mycmp(s a,s b)
{
    if(a.age>=60&&b.age<60)
        return true;
    else if(a.age<60&&b.age>=60)
        return false;
    else if(a.age>=60&&b.age>=60)
        return a.age>b.age?true:false;
}
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
        cin>>br[i].id>>br[i].age;
    stable_sort(br,br+n,mycmp);
    for(int i=0;i<n;i++)
        cout<<br[i].id<<'\n';
    return 0;
}
