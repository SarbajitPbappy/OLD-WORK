#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define note "Enter The Valid Operation"

int main()
{

    printf("\t\t\t Welcome To Calculator\n\n");
    int choice;
    int addition,subtraction,multiplication,division,modulus,factorial,square,power,cube,squareroot,matrix;

    while(1)
    {
        printf("PRESS YOUR DESIRE ONE\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 'addition':

            {
                int n,i,a[10000],sum;
                printf("How Many Number You Want To Sum Up=\n");
                scanf("%d",&n);
                printf("Enter The Numbers:");
                for(i=0; i<n; i++)
                {
                    scanf("%d",&a[i]);
                }
                for(i=0; i<n; i++)
                {
                    sum+=a[i];
                }
                printf("The Sum Of Array Is=%d\n",sum);

            }

            break;

        default:
            printf("\n****************%s*************\n,note");
        }
    }

    return 0;
}
