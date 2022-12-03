#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=-10;i<=80;i++)
    {
        if(n%2==0)
        {
            printf("Even");
            break;
        }


        else if(n>i)
        {
            printf("Excluded");
            break;
        }
    }

    return 0;
}
