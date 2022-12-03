#include<stdio.h>
int main()

{
    int i,n,reminder,temp=0;
    scanf("%d",&n);
    while(n!=0)
    {
        reminder=n%10;
        temp+=reminder;
        n/=10;
       
    }
    printf("%d",temp);
    
}