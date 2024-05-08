#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long
int isPrime(ll n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    ll n;
    scanf("%lld",&n);
    ll n1,n2;
    for(n1=2;;n1++)
    {
        n2=n-n1;
        if(isPrime(n1)&&isPrime(n2))
        {
            printf("%lld = %lld + %lld",n,n1,n2);
            return 0;
        }
    }
}
