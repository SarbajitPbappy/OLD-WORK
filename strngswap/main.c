#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[]="Sarbajit";
    char s2[]="Bangladesh";
    char temp[1000];
    printf("\n\nBefore Swapping\n");
    printf("s1=%s\n",s1);
    printf("s2=%s\n",s2);
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
    printf("\n\nAfter Swapping\n");
    printf("s1=%s\n",s1);
    printf("s2=%s\n",s2);
    strupr(s1);
    printf("S1=%s\n",s1);
    strlwr(s2);
    printf("S2=%s\n",s2);

}
