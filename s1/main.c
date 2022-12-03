#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   scanf("%d",&a);
   for(int i=1;i<=a;i++)
   {
       scanf("%d",&b);

       if(b%2==0)
       {
           printf("EVEN\n");
       }
       else
       {
           printf("ODD\n");
       }

   }
    return 0;
}
