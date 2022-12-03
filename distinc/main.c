#include <stdio.h>
#include <stdlib.h>

int digits(int n)
{
    int a,b,c,d;
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        return 1;
    else
        return 0;
}
int main()
{
    int n,x;

    scanf("%d",&n);

    for(int i=n+1; i<=9012; i++)
    {
        x=digits(i);
        if(x==1)

        {
            printf("%d",i);
            break;
        }

    }
    return 0;
}
