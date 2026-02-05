#include<stdio.h>

int main() {
    int age[3];

    printf("Enter age of 1st person: ");
    scanf("%d", &age[0]);
    
    printf("Enter age of 2nd person: ");
    scanf("%d", &age[1]);
    
    printf("Enter age of 3rd person: ");
    scanf("%d", &age[2]);

    printf("1st person age: %d, 2nd person age: %d, 3rd person age: %d", age[0], age[1], age[2]);
    return 0;
}