#include<stdio.h>

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    // (condition) ? do something if TRUE: do something if FALSE;
    (age >= 18) ? printf("adult") : printf("Teenager");
}