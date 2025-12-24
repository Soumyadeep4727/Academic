#include<stdio.h>

int main()
{
    // Checking if a number is even or odd
    // even -> 1
    // odd -> 0 
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
}