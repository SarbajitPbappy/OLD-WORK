#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
int main()
{
    while(1)
    {

        int r;
        scanf("%d",&r);
        float area=(r*r)-((PI*(r*r))/4);
        printf("%.2f\n",area);
    }
    return 0;
}
