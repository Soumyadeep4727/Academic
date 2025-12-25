#include<stdio.h>

int main()
{
    // Natural number
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if( a<1 )
    {
        printf("The number is not a natural number.");
    }
    else
    {
        printf("The number is natural number.");
    }

}