#include<stdio.h>
// temperature conversion

float CtoF(float celsius);
float FtoC(float fahrenheit);

int main() {
    int choice;
    float fahrenheit, celsius;
    printf("Choose an option:\n"
        "1. Fahrenheit to Celsius\n"
        "2. Celsius to Fahrenheit\n");
    scanf("%d", &choice);
    if( choice == 1){
        printf("Enter temperature in fahrenheit: ");
        scanf("%f", &fahrenheit);
        float far = FtoC(fahrenheit);
        printf("The temperature in celsius is: %.2f", far);
    }
    else if( choice == 2){
        printf("Enter temperature in celsius: ");
        scanf("%f", &celsius);
        float cel = CtoF(celsius);
        printf("The temperature in fahrenheit is: %.2f", cel);
    }
    else {
        printf("Invalid choice");
    }
    return 0;
}

float CtoF(float celsius){
     float far = celsius * (9.0/5.0) + 32;
     return far;
}

float FtoC(float fahrenheit){
    float cel = (fahrenheit-32) * 5.0/9.0;
    return cel;
}