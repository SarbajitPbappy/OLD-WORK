#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//ax²+bx+c=0

int main()
{
    float x1,x2,discriminant;
    int a,b,c;
    printf("Enter The Value Of a,b,c=");
    scanf("%d %d %d",&a,&b,&c);
    printf("%dx^2+%dx+%d=0\n",a,b,c);
    discriminant=b*b-4*a*c;
    x1=(-b+sqrt(discriminant))/(2*a);
    x2=(-b-sqrt(discriminant))/(2*a);

    printf("The Value Of X1=%.2f\n",x1);

    printf("The Value Of X2=%.2f",x2);
    getch();

}
