#include<stdio.h>

int fibonacci(int n);

int main(){
    int n;
    printf("Enter a value for the terms of fibonacci: ");
    scanf("%d", &n);
    int result= fibonacci(n);
    printf("The fibonacci of %d is: %d", n, result);
    return 0;
}

int fibonacci(int n) {
        if( n == 0 ){
            return 0;
        }
        else if( n == 1 ){
            return 1;
        }

        int fibNm1 = fibonacci(n-1);
        int fibNm2 = fibonacci(n-2);
        int fibN = fibNm1 + fibNm2; // fibonacci = fibonacci(n-1) + fibonacci(n-2)
        return fibN;
}