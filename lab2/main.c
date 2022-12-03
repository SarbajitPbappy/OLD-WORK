#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows,i,j,l=1;
    printf("Enter number of rows you want: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; i++){
            l=(i*(i+1))/2;
        for(j=1; j<=rows-i; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%2d ",l);
            l--;
        }
        printf("\n");
    }
    return 0;
}
