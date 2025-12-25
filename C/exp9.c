#include<stdio.h>

int main()
{
    // Uppercase or lowercase check
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ( ch>=65  &&  ch<=90)
    {
        printf("This is an uppercase character.");
    }
    else if( ch>=97  &&  ch<=122 )
    {
        printf("This is a lowercase character.");
    }
    else
    {
        printf("This is not a character");
    }
}