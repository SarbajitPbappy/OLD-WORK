#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1<num3 || num1<num2 && num1>num3)
    {
        printf("Middle Number: %d",num1);
    }
    else if(num2>num1 && num2<num3 || num2<num1 && num2>num3)
    {
        printf("Middle Number: %d",num2);
    }
    else
    printf("Middle Number: %d",num3);
    return 0;
}
