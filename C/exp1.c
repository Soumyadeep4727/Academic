#include<stdio.h>

int main()
{
    // Checking if a number is even or odd
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
}