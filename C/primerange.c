#include<stdio.h>

int main()
{
    int a, i, j, isPrime;
    printf("Enter a limit for the range of prime numbers: ");
    scanf("%d", &a);
    
    if( a<2)
    {
        printf("There are no prime numbers.\n");
    }
    for(i=2; i<=a; i++)
    {
        isPrime=1;
        
        for(j=2; j*j<=i; j++)
        {
            if( j%i == 0 )
            {
                isPrime=0;
            }
        }
    }
    if(isPrime)
    printf("The prime numbers in range to N are: %d", i);
}