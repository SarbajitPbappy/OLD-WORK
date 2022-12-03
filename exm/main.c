#include<stdio.h>

int main()
{

    int n,i;
    float c,big;

    printf("Enter the number of elements you wish to find the greatest element of: ");
    scanf("%d", &n);
    scanf("%f", &big);

    for(i = 2; i <= n; i++)
    {
        scanf("%f", &c);
        if(big < c)
            big = c;
    }

    printf("\n\n\nThe largest of the %d numbers is  %.2f ", n, big);

    return 0;
}
