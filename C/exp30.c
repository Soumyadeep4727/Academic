#include<stdio.h>

float percentage();

int main(){
    printf("The percentage of marks is: %.2f", percentage());
}

float percentage(){
    float math, sc, sans, avg;
    printf("Enter marks in Maths: ");
    scanf("%f", &math);
    printf("Enter marks in Science: ");
    scanf("%f", &sc);
    printf("Enter marks in Sanskrit: ");
    scanf("%f", &sans);

    avg= ((math+sc+sans)/300) * 100;
    return avg;
}