#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int i,num;
        printf("Enter Any Number:");
        scanf("%d",&num);
        for(i=1; i<=10; i++)
        {

            printf("%d\n",num*i);
        }
    }
    return 0;
}
