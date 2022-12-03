#include<stdio.h>
int main()
{
char c='a';
char *p=&c;
printf("%c\n",p);
printf("%c\n",*p);
printf("%c\n",&c);
printf("%c\n",c);

}
