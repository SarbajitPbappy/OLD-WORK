#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d positive",a);
    }
    else if(a<0)
    {
        printf("%d negative",a);
    }
    else
        printf("Zero");
}
