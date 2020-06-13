#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int ispalindrome(char s[]);

void main()
{
    char IN[100]={0}; // Maximum 100

    printf("please enter word, number, phrase, or other sequence of characters  to check if it is a palindrime\n");
    scanf("%s", IN);

    if(ispalindrome(IN)==1)
    printf("Its a palindrome\n");
    else
    printf("Its not a palindrome\n");

}

int ispalindrome(char s[])
{
    char d[100],Ctmp;
    //d: character destination, Ctmp: char TEMP
    int source=0, dest=0,L=0,i;
    //source=source char, dest=destination char, L:string length

    //This will remove everything but alpha and numerical values
    while(s[source])
    {
        Ctmp=toupper(s[source]);

        if(isalnum(Ctmp))
        {
            d[dest]=Ctmp;
            dest++;
        }

        source++;

    }

    d[dest]='\0';

    //This will run a palindrome check on the d array

    source=0;
    dest=0;
    L=strlen(d);

    for(i=0;i<L/2;i++)
    {
        if(d[i]==d[L-1-i])
            source++;
        dest++;
    }

    if(source==dest)
        return 1;
    else
        return 0;
}
