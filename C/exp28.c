#include<stdio.h>

int sum(int a);

int main(){
    printf("sum is: %d", sum(3));
    return 0;

}

int sum(int a){
    if(a == 1){
        return 1;
    }
    int b = sum(a-1); // sum of (n-1) numbers given the input is n
    int c = b + a;
    return c;
}