void printspace(int n)
{
    for(int i=0;i<n;i++)printf(" ");
}
void pyramid( int n )
{
    for(int i=0;i<n;i++)
    {
        printspace(n-i-1);
        for(int j=0;j<i;j++)
        {
            printf("%d ",i+1);
        }
        printf("%d",i+1);
        printf(" ");
        printf("\n");
    }
}
