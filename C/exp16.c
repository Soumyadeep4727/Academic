#include<stdio.h>

int main()
{
    // user unput excluding multiple of 7
    int a;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        printf("The entered number is: %d\n", a);
        if( a%7 == 0 )
        {
            break;
        }
    }
    printf("Multiple of 7 not accepted");
}