int narcissistic( int number )
{
    int n=number;
    int sum=0;
    int m=0;
    while(n>0)
    {
        m++;
        n/=10;
    }
    n=number;
    while(n>0)
    {
        sum+=pow(n%10,m);
        n/=10;
    }
    return sum==number;
}
void PrintN( int m, int n )
{
    for(int i=m+1;i<n;i++)
    {
        if(narcissistic(i))
            printf("%d\n",i);
    }
}
