#include<stdio.h>

int main()
{
    // table of given number
    int n,multi;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i=1; i<=10; i++)
    {   
        multi= i*n;
        printf("The table of the given number is: %d\n", multi);
    }
    
}