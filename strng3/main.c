#include<stdio.h>
int main()
{

    char s1[]="Sarbajit";
    char s2[]="Sarbajit";
    int d=strcmp(s1,s2);
    if(d==0)
    {
        printf("Equal String\n");

    }
    else
        printf("Not Equal\n");

        strrev(s1);
        strrev(s2);

        printf("%s\n%s",s1,s2);

}
