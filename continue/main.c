#include<stdio.h>
int main()
{
    int num[499999],i,sum=0,n,mul=1,max=num[0],div;
    printf("How Many Numbers:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=1; i<n; i++)
    {
        if(max<num[i])
            max=num[i];
    }


    for(i=0; i<n; i++)
    {
        sum=sum+num[i];
        mul=mul*num[i];
    }
    printf("Sum=%d\n",sum);
    printf("Max=%d\n",max);

    printf("Multiply=%d\n",mul);


    printf("Avg=%.2f",(float)sum/n);
}
