#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,k,count=0;
   scanf("%d %d",&n,&k);
   int a[101];
   for(int i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(int i=1;i<=n;i++)
   {
       if(a[i]>0 && a[i]>=a[k])
        count++;
   }
   printf("%d",count);
    return 0;
}
