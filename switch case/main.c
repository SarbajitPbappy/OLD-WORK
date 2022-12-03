#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int con=n>0;
    switch(con)
    {
    case 1:
        printf("Positive\n");
        break;
    case 0:
        printf("Negative\n");
        break;
    /*default:
        printf("Zero");*/
    }
    return 0;
}
