#include<stdio.h>
int main()
{
    int r,c,row,colum;
    int a[100][100],b[100][100],C[100][100];
    printf("Enter The Number Of Rows:");
    scanf("%d",&row);
    printf("Enter The Number Of Colums:");
    scanf("%d",&colum);
    printf("Enter elements for A matrix:\n");
    for(r=0;r<row;r++)
    {
        for(c=0;c<colum;c++)
        {
            printf("a[%d][%d]=",r,c);
            scanf("%d",&a[r][c]);
        }
        printf("\n");

    }
    printf("A=");
     for(r=0;r<row;r++)
    {
        printf("\t");
        for(c=0;c<colum;c++)
        {
            printf("%d\t",a[r][c]);
        }
        printf("\n");
    }
     printf("Enter elements for b matrix:\n");
    for(r=0;r<row;r++)
    {
        for(c=0;c<colum;c++)
        {
            printf("b[%d][%d]=",r,c);
            scanf("%d",&b[r][c]);
        }
        printf("\n\n");

    }
    printf("B=");
     for(r=0;r<row;r++)
    {
        printf("\t");
        for(c=0;c<colum;c++)
        {
            printf("%d\t",b[r][c]);
        }
        printf("\n");
    }
    for(r=0;r<row;r++)
    {
        for(c=0;c<colum;c++)
        {
            C[r][c]=a[r][c]+b[r][c];
        }
    }
    printf("\nA+B=");
     for(r=0;r<row;r++)
    {
        printf("\t");
        for(c=0;c<colum;c++)
        {
            printf("%d\t",C[r][c]);
        }
        printf("\n");
    }
}
