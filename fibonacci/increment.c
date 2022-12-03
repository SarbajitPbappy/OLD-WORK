#include<stdio.h>
int main()
{
    int a=5,b=10,c=15;
    printf("%d\n",b-=5);
    c-=a--;
    printf("%d %d\n",a,b);
    a=--b + c++;
    printf("%d",--a);
}