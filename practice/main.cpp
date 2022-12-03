#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"1.Summation"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
    int choice;

    while(1)
    {
        cout <<"Enter Your Choice:";
        cout<<endl<<endl;
        cin >> choice;
        double num1,num2;

        switch(choice)
        {
        case 1:
            {double sum;
            cout<<"Enter Two Number :";
            cin >>num1>>num2;
            sum=num1+num2;
            cout<<showpoint;
            cout<<fixed;
            cout<<setprecision(100);
            cout<<setw(20)<<"the Sum is:"<<sum<<endl<<endl;
            break;}

        case 2:
            {double sub;
            cout<<"Enter Two Number :";
            cin >>num1>>num2;
            sub=num1-num2;
            cout<<"the Subtraction is:"<<sub<<endl<<endl;
            break;}
        case 3:
            {double mul;
            cout<<"Enter Two Number :";
            cin >>num1>>num2;
            mul=num1*num2;
            cout<<"the Multiplication is:"<<mul<<endl<<endl;
            break;}
        case 4:
            {double div;
            cout<<"Enter Two Number :";
            cin >>num1>>num2;
            div=(float)num1/num2;
            cout<<"the Division is:"<<div;}

        }
    }

}
