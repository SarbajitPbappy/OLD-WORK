#include<stdio.h>
#include<string.h>
int main()
{
    int test;
   scanf("%d",&test);
   char str[100];
    for(int i=0;i<test;i++)
    {

        scanf("%s",&str);
        int l=strlen(str);

        if(l>10)
        {
            printf("%c",str[0]);
            printf("%d",l-2);
            printf("%c\n",str[l-1]);

        }
        //printf("\n");

        else
            printf("%s",str);
    }

}

