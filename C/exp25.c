#include<stdio.h>
// table using function

void table(int d);

int main() {
    int d;
    printf("Enter a number for table: ");
    scanf("%d", &d);

    table(d);
}

void table(int d) {
    int multi;
    for(int i=1; i<=10; i++) {
        multi = i*d;
        printf("%d\n", multi);
    }
}