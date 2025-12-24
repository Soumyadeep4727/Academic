#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d",&b);

    printf("value of a : %d", a);
    printf("\nvalue of b : %d", b);

    int sum = a + b;
    int substract = a - b;
    int multiply = a*b;
    int divide = a/b;

    printf("\nSum is : %d", sum);
    printf("\nSubstract is : %d", substract);
    printf("\nProduct is : %d", multiply);
    printf("\nDivision is : %d", divide);
}