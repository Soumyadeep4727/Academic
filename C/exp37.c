#include<stdio.h>
// array use 
int main() {
    float price[3];

    printf("Enter price of pencils: ");
    scanf("%f", &price[0]);

    printf("Enter price of erasers: ");
    scanf("%f", &price[1]);

    printf("Enter price of sharpners: ");
    scanf("%f", &price[2]);

    printf("Final price of pencils: %f\n", price[0]+(0.18*price[0]));
    printf("Final price of erasers: %f\n", price[1]+(0.18*price[1]));
    printf("Final price of sharpners: %f\n", price[2]+(0.18*price[2]));
    return 0;
}