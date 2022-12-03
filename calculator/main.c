#include<stdio.h>
#include<math.h>
int main()
{
    while(1)
    {
        int a[1000],sum,i,n,sub,mul,div;
        char choice;
        printf("Choose The Operators(+,-,*,/):\n");

        scanf("%c",&choice);
        switch(choice)
        {
        case '+':
        {
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
            break;
        }
        case '-':
        {
            int a,b;
            printf("Enter Two Numbers:");
            scanf("%d %d",&a,&b);
            printf("The Subtraction is=%d",a-b);
            break;
        }
        case '*':
        {
            printf("How Many Number You Want To  Multiply=\n");
            scanf("%d",&n);
            printf("Enter The Numbers:");
            for(i=0; i<n; i++)
            {
                scanf("%d",&a[i]);
            }
            for(i=0; i<n; i++)
            {
                mul*=a[i];
            }
            printf("The Multiply Of Array Is=%d\n",mul);
            break;
        }
        case '/':
        {
            double a,b;
            printf("Enter The Two Numbers:");
            scanf("%lf %lf",&a,&b);
            printf("The Dividation Is:%.2lf",(float)a/(float)b);
        }
        }
    }
}
