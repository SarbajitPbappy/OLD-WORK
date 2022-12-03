#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    printf("Enter Value: ");
    scanf("%d",&value);
    if(value>0)
    {
        printf("Positive");
    }
    else if(value<0)
    {
        printf("Negative");
    }
    else if(value==0)
        printf("Neutral");
    return 0;
}
