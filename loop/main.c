#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,sum,multiply,difference,even_sum=0,odd_sum=0;
   float dividation;
   printf("Enter the value of N=");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
        if(i%2==0)
            even_sum=even_sum+i;
        else
            odd_sum=odd_sum+i;
   }
   printf("The sum of even num=%d\n",even_sum);
   printf("The sum of odd num=%d\n",odd_sum);
   printf("The sum of All num=%d\n",sum=even_sum+odd_sum);
   printf("The Difference of All num=%d\n",difference=even_sum-odd_sum);
   printf("The Multiply of All num=%d\n",multiply=even_sum*odd_sum);
   printf("The Dividation of All num=%.2f",dividation=(float)even_sum/odd_sum);
}
