#include<stdio.h>

int main(){
    int age = 20;
    int *add = &age;  // * = value at address
    int show = *add;  // & = address of 

    printf("%d %u", show, add);
}