#include<stdio.h>
// prime numbers in range

int main()
{
    int a, i, j, isPrime;
    printf("Enter a limit for the range of prime numbers: ");
    scanf("%d", &a);
    
    if( a<2){
        printf("There are no prime numbers.\n");
    }
    
    for(i=2; i<=a; i++){
        isPrime=1;
        
        for(j=2; j*j<=i; j++){
            if( i%j == 0 ){
                isPrime=0;
                break;
            }
        }
    if(isPrime)
    printf("The prime numbers in range to N are: %d\n", i);
    }
}