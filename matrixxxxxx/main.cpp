#include<iostream>
using namespace std;
int main()

{
    int row,col,r,c;
    int a[100][100];
    int n;
    int choice;
    cout<<"\t\tWelcome to Matrix"<<endl<<endl;
    cout<<"PRESS 1 FOR SUM"<<endl;
    cout<<"PRESS 2 FOR SUB"<<endl;
    cout<<"PRESS 3 FOR MUL"<<endl;
    cout<<"PRESS 4 FOR DIV"<<endl;
    cout<<endl<<endl;
    while(1)
    {
        cout<<"Enter Your Choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            cout<<"How Many Matrix Work You Want To SUM:";
            cin>>n;
            int b[n];
            for(int m=1; m<=n; m++)
            {
                cout<<"Matrix "<<" "<<" ";
                cin>>b[m];

                cout<<"Enter The Row & Col Number= "<<endl;
                cin>>r>>c;

                for( row=1; row<=r; row++)
                {
                    for(col=1; col<=c; col++)
                    {
                        cout<<"a["<<row<<"]["<<col<<"]= ";
                        cin>>a[row][col];
                    }
                }
                cout<<"Matrix "<<m<<"="<<"\n";
                for( row=1; row<=r; row++)
                {
                    for(col=1; col<=c; col++)
                    {

                        cout<<a[row][col]<<"\t ";

                    }
                    cout<<endl;

                }

            }
        }
        }


    }
}
