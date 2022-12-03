#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int x=3,y=12,z=15;
    printf("1. x = %d\n",++x);
    y+=(x+1);
    printf("2. x = %d y = %d\n",x,y);
    z=((x--)+(--y));
    printf("3. z = %d\n",z++);
    */
    /*int i;
    for(i=1;i<=10;i++)
    {
        if(i%3==0)
        {
            printf("\n Coding");
        }
        else if(i%7==0)
            break;
        else
        {
            printf("\n Fun");
            continue;
        }
        printf("\n Line %d",i);
    }*/

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf("* ",j);
        }
    }
    return 0;
}
