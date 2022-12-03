#include<stdio.h>
int main()
{
    int i,j,rows,number=1;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",i+64);
            //number+=2;
        }
        printf("\n");
    }
}