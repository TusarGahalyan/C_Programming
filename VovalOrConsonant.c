#include<stdio.h>
int main()
{
    char Alph;
    char a;
    char e;
    char i;
    char o;
    char u;
    printf("Enter the Alphabet ");
    scanf("%c",&Alph);

    if(Alph == 'a' || Alph == 'e' || Alph == 'i' || Alph == 'o' || Alph == 'u')
    {
        printf("The alphabet is a voval");
    }
    else 
    {
        printf("The alphabet is a consonant");
    }

    return 0;
}