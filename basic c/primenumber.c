#include<stdio.h>
int main()
{
    int num,count=0,factor=0,i=2;
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


    printf("The Factors of %d is: ",num);

    for(int j=1; j<=num; ++j)
    {
        if(num%j==0)
        {
            printf("%d ",j);
            factor++;
        }


    }
    if(factor==0)
    {
        printf("\nNO FACTORS");
    }
    else
        printf("\nTotal Factors of %d is: %d ",num,factor);

    return 0;
}

