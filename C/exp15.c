#include<stdio.h>

int main()
{
    // user input only even numbers
    int s;
    do 
    {
        printf("Enter numbers: ");
        scanf("%d", &s);
        printf("The entered number is: %d\n", s);

        if( s%2 != 0)
        {
            break;
        }

    }
    while(1);
    printf("Odd numbers not allowed."); 
}