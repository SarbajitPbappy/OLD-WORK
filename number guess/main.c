#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int num,guess,tries=0,n;
    srand(time(0));
    while(1)
    {

        printf("Enter The Number Range In Your Mind:");
    scanf("%d",&n);
    printf("The Number Range 1 to %d=\t",n);
    for(int i=1;i<=n;i++)
    {
      printf("%d\t",i);
    }
    printf("\n\n\n");

    num=rand()%n+1;
    printf("\t\tNumber Guessing Game\n");
    printf("\t\t--------------------\n\n");
    do
    {
        printf("Enter The Guess Number:");
        scanf("%d",&guess);
        tries++;
        if(guess>num)
        {
            printf("Too high!\n\n");
        }
        else if(guess<num)
        {
            printf("Too low!\n\n");
        }
        else
            printf("\nCorrect!You Won!");

    }

    while(guess!=num);
    printf("\n\n\n");
    }
    return 0;

}
