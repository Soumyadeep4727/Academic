#include<stdio.h>
// sum of digits of given  number
int sumofdigits(int s);

int main(){
    int s;
    printf("Enter a number: ");
    scanf("%d", &s);

    printf("sum of digits: %d", sumofdigits(s));
    return 0;
}

int sumofdigits(int s){
    int sum = 0;
    while (s != 0){
    sum = sum + (s % 10);
    s = s / 10;
    }
    return sum;
}