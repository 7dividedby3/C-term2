#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        int a[114514],b[114514];
        long long distance_square=0; //距离平方 不用long double了
        long long distance_square_min=1e18;
        int min1,min2,min3,min4;
        for(int i=0;i<n;i++)scanf("%d %d",&a[i],&b[i]);
        for(int l=1;l<n;l++)
            for(int i=0;i+l<n;i++)
            {
                distance_square=(a[i+l]-a[i])*(a[i+l]-a[i])+(b[i+l]-b[i])*(b[i+l]-b[i]);
                if(distance_square<distance_square_min)
                {
                    min1=a[i];
                    min2=b[i];
                    min3=a[i+l];
                    min4=b[i+l];
                    distance_square_min=distance_square;
                }
            }
        printf("(%d,%d) (%d,%d)\n",min1,min2,min3,min4);
    }
    return 0;
}
