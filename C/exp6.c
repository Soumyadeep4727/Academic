#include<stdio.h>

int main()
{
    // digit check
    char F;
    printf("Enter a character: ");
    scanf("%c", &F);
    if ( F >= '0' && F <= '9')
    {
        printf("The character is a digit");
    }
    else 
    {
        printf("The character is not a digit");
    }
}