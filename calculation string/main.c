#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000],ch;
    int i,vowel,consonant,digit,symbole,word,other;
    printf("Enter The name:");
    gets(s);
    i=vowel=consonant=digit=symbole=word=other=0;
    while(ch=s[i]!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;
        else if(ch>='a'&&ch<='z'|| ch>='A'&&ch<='Z')
            consonant++;
        else if(ch>='0'&&ch<='9')
            digit++;

        else if(ch==' ')
            word++;
        else
            other++;
        i++;
    }
    word++;
    printf("Number of Vowel=%d\n",vowel);
    printf("Number of Consonant=%d\n",consonant);
    printf("Number of Digit=%d\n",digit);

    printf("Number of Word=%d\n",word);
    printf("Number of Other=%d\n",other);
}
