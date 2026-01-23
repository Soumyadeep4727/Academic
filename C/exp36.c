#include<stdio.h>
// normal value swap... memmory address value swap
void swap(int a, int b);
void pointerswap(int *a, int *b);

int main(){
    int x = 3, y = 4;
    
    swap(x,y);
    printf(" x = %d\t y = %d\n", x, y);

    pointerswap(&x,&y);
    printf(" x = %d\t y = %d\n", x, y);
    
    return 0;
}

void swap(int a, int b) {
    int c = b;
    b = a;
    a = c;
    printf(" a = %d\t b = %d\n", a, b);
}

void pointerswap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
    printf(" a = %d\t b = %d\n", *a, *b);
}