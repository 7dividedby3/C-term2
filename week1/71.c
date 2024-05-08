#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int temp=0;
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&temp);
        if(temp<0)
            break;
        else if(temp>n)
            printf("Too big\n");
        else if(temp<n)
            printf("Too small\n");
        else if(temp==n)
        {
            if(i==1)
                printf("Bingo!\n");
            else if(i<=3)
                printf("Lucky You!\n");
            else
                printf("Good Guess!");
            return 0;
        }
    }
    printf("Game Over\n");
    return 0;
}
