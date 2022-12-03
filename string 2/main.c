#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[]="Sarbajit";
    char s2[]="Sarbajit";

    strcat(s1, s2);
    printf("Name:%s\n",s1);
    int d=strcmp(s1,s2);
    if(d==0)
    {
        printf("equal String\n");

    }
    else
        printf("Not Equal\n");




    int length=strlen(s1);
    printf("Your Name Length:%d\n",length);
    strcpy(s2,s1);
    printf("s2=%s\n",s2);
    return 0;
}
