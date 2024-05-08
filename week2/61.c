int gcd( int x, int y )
{
    return y>0?gcd(y,x%y):x;
}
