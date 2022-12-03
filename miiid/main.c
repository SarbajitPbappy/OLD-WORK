#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    //int A,B,C,D;
    //scanf("%d %d %d %d",&A,&B,&C,&D);
    //int diff=(A*B)-(C*D);
    //printf("DIFERENCA = %d\n",diff);
    int c_held,c_attend;
    char c='37';
    printf("Number of classes held: ");
    scanf("%d",&c_held);
    printf("Number of classes attended: ");
    scanf("%d",&c_attend);
    int percent=(c_attend*100)/c_held;
    printf("Percentage of class attended: %d%c\n",percent);
    if(percent>=75)
        printf("You are allowed");
    else
        printf("You are Not allowed");

    /*int i,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     if(i%2!=0)
        printf("%d ",i*i);
    }*/
    /*int i,arr[10],count=0,sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            sum+=arr[i];
            count++;
        }
    }

    printf("%.1f",((float)sum/count));*/


    return 0;
}
