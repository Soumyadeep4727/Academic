#include<stdio.h>
// function to determine area of square, circle, rectangle
float square(float side);
float circle(float radius);
float rectangle(float length, float breadth);

int main(){
    int choice;
    float side, radius, length, breadth;
    printf(
        "Enter an option:\n"
        "1. Area of Square\n"
        "2. Area of Circle\n"
        "3. Area of Rectangle\n");
    scanf("%d", &choice);

    switch(choice){
        case 1: 
            printf("Enter side of Square: ");
            scanf("%f", &side);
            printf("Area of Square: %.2f", square(side));
            break;
        
        case 2: 
            printf("Enter radius of Circle: ");
            scanf("%f", &radius);
            printf("Area of circle: %.2f", circle(radius));
            break;
        
        case 3: 
            printf("Enter lenght and breadth of rectangle: ");
            scanf("%f %f", &length, &breadth);
            printf("Area of Rectangle: %.2f", rectangle(length,breadth));
            break;
        
        default:
            printf("Invalid choice");
    }
}

float square(float side){
    return side*side;
}

float circle(float radius) {
    return 3.14* radius*radius;
}

float rectangle(float length, float breadth) {
    return length*breadth;
}