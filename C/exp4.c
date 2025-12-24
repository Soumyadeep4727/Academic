#include<stdio.h>

int main()
{
    // two digit number check
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    printf("%d", a>9 && a<100);
}