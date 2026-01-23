#include<stdio.h>
// fibonacci of Nth terms
void fibonacci();

int main(){
    fibonacci();
    return 0;
}

void fibonacci(){
    int n, a=0, b=1, c;
    printf("Enter n for the terms of fibonacci: ");
    scanf("%d", &n); 
    for (int i=1; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
        printf("\nThe fibonacci series for %d is: %d", n, c);
    }
}