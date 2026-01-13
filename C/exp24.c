#include<stdio.h>
// sum using function

int sum(int x, int y);

int main() {
    int a, b;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);

    int s= sum(a,b);
    printf("Sum is: %d", s);
}

int sum(int x, int y) {
    return x + y;
}