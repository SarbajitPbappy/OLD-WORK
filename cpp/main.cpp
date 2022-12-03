#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {

        for(int i=1; i<=n/2+1; i++)
        {
                //PRINTING SPACE
            for(int j=i; j<=n/2; j++)
                cout<<" ";

            for(int s=1; s<=2*i-1; s++)
                cout<<"*";
            cout<<endl;
        }
        int count=1;
        while(count<=2)
        {
            for(int j=count; j<=n/2; j++)
                cout<<" ";
            int p=2*count-1;
            for(int s=1; s<=p; s++)
                cout<<"*";
            cout<<endl;
            count++;
        }
        cout<<endl;
    }

    return 0;
}

