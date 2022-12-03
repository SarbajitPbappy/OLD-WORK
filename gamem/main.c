#include<stdio.h>
int main()
{

    int s_num[]={5,6,7,8,9,10,12,13,14,15,16,17,18,19,20,22},g_num;
    int g_limit=3;
    int i,n;
     printf("The Range Of Natural Number 1 to: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    printf("\t1.This A PRIME Number\n\t2.");



    for(int i=1;i<g_limit;i++)
    {

        printf("Guess Number %d:",i);
        scanf("%d",&g_num);
        if(g_num=s_num)
        {
            printf("You Won!");
            break;
        }
    }
    if(g_num!=s_num)
    {
        printf("You Lost!");
    }
    return 0;
}
