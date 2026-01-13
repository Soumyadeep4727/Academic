#include<stdio.h>

void hello();
void goodbye();

int main() {
    hello();
    goodbye();
    return 0;
}

void hello() {
    printf("Hello. this is 2nd task\n");
}

void goodbye() {
    printf("This is end statement. goodbye");
}