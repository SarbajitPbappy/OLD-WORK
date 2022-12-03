#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int x=5,y=10,z=15;
    printf("1. x = %d\n",x*=5);
    y-=(x--);
    printf("2. x = %d y = %d\n",x,y);
    z=((++x)-(y--));
    printf("3. z = %d\n",z--);*/
    int i,x;
    for(i=1,x=1;i<10;i+=2)
    {
        if(x%4==3)
        {
          x*=2;
          continue;
        }
        x-=i;
        printf("%d\n",x);
        if(x%10==0)
        {
            break;
        }
    }
    return 0;
}
