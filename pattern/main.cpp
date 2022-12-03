#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,space,row;
    cout<<"Enter The Range You Want To Print:";
    cin>>n;

    for(int row=1,k=0;row<=n;row++,k=0)
    {
        for(space=1;space<=n-row;space++)
        {

            cout<<" ";
        }
        while(k!=2*row-1)
        {
            cout<<" ";
            k++;
        }
        cout<<endl;
    }
    for(int row=n,k=0;row>=1;row--,k=0)
    {
        for(space=1;space<n-row;space++)
        {

            cout<<" ";
        }
        while(k!=2*row-1)
        {
            cout<<" ";
            k++;
        }
        cout<<endl;
    }

}
