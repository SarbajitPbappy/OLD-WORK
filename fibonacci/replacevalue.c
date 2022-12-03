#include<stdio.h>
int main()
{
    int i,a[100],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>=5 && a[i]<=10)
        {
             a[i]=1;
        }
        printf("%d ",a[i]);
    }
}