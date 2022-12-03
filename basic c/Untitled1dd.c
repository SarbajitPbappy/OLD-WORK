#include<stdio.h>
int main()
{
  int num1,num2,gcd,rem,lcm;
  scanf("%d %d",&num1,&num2);
  int n1=num1;
  int n2=num2;
  while(num2!=0)
  {
      rem=n1%n2;
      n1=n2;
      n2=rem;
  }
  gcd=n1;
  lcm=(n1*n2)/gcd;

  printf("GCD=%d\n",gcd);
  printf("LCM=%d\n",lcm);
    return 0;
}
