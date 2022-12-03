#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],b;
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            printf("Even\n");
        }
        else
        {
           printf("Odd\n");
        }

    }
    return 0;
}
