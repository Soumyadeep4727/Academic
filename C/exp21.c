#include<stdio.h>

int main()
{
    // prime number check
    int isPrime=1, a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if( a<=1)
    {
        isPrime=0;
    }
    else 
    {
        for(int i=2; i*i<=a; i++)
        {
            if( a%i==0 )
            {
                isPrime=0;
            }
        }
    }
    if(isPrime==1)
    {
        printf("The number is prime.");
    }
    else
    {
        printf("The number is not prime.");
    }
}