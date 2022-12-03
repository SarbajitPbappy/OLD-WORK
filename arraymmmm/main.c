#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int array[n*2];
    for(int i=0;i<n*2;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n*2;i+=2)
    {
        if(array[i]>array[i+1])
        {
            printf("FIRST\n");
        }
        else if(array[i]==array[i+1])
        {
            printf("ANY\n");
        }
        else if(array[i]<array[i+1])
        {
            printf("SECOND\n");
        }
    }

    return 0;
}
