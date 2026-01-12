#include<stdio.h>

int main()
{
    // factorial
    int fact=1, n;
    printf("Enter a number for factorial: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        fact= fact*i;
    }
    printf("The factorial of n is: %d", fact);
}