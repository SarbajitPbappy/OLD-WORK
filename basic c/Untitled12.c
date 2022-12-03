#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0,count=0;
    for(int i=0;; i++)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        sum+=a;
        count++;

    }

    printf("Average is : %.2f",(float)sum/count);
}
