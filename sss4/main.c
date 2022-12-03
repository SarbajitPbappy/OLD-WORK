#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&c);
        printf("Case %d :",b);
        for(d=1;d<=c;d++)
        {
            if(c%d==0)
            {
                printf(" %d",d);
            }
        }
        printf("\n");
    }
    return 0;
}
