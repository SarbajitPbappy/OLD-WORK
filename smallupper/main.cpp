#include<iostream>
using namespace std;
int main()
{
    char str[1000];
    cout<<"Enter a String:";
    gets(str);
    int i,vowel,consonant,word,digit,other,capital,small;
    vowel=consonant=word=digit=other=capital=small=0;
    i=0;
    int a=strlen(str);
    while((str[i])!='\0')
    {


        if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117 && str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85)
        vowel++;
        else if((str[i]>=97 && str[i]<=122)||(str[i]>=65 && str[i]<=90))
        consonant++;
        else if(str[i]>=65 && str[i]<=90)
        capital++;
        else if(str[i]>=97 && str[i]<=122)
        small++;
        else if(str[i]==' ')
        word++;
        else if(str[i]>='0'&& str[i]<='9')
        digit++;

        else
        other++;
        i++;
    }
    word++;

    cout<<"Length="<<a;

    cout<<"The Number Of Vowel Is="<<vowel<<endl;
    cout<<"The Number Of Consonant Is="<<consonant<<endl;
    cout<<"The Number Of Word Is="<<word<<endl;
    cout<<"The Number Of Digit Is="<<digit<<endl;
    cout<<"The Number Of Lowercase Is="<<small<<endl;
    cout<<"The Number Of Upercase Is="<<capital<<endl;
    cout<<"The Number Of Other Is="<<other<<endl;
}
