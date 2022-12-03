#include<stdio.h>
int main()
{
    int num,count=0,i=2;
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
        i++;
    }

    if(count==0)
    {
        printf("%d is PRIME\n",num);
    }
    else
        printf("%d is NOT PRIME\n",num);

    return 0;
}

