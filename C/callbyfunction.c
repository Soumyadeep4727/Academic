#include<stdio.h>

void square(int a);
void addsquare(int *a);

int main(){
    int num = 5;
    
    square(num);
    printf("Original number: %d\n", num);

    addsquare(&num);
    printf("Original number: %d\n", num);
    return 0;
}

// call by value
void square(int a){
    a = a * a;
    printf("Square by value: %d\n", a);
}

// call by reference
void addsquare(int *a){
    (*a) = (*a) * (*a);
    printf("square by address reference: %d\n", (*a));
}
