#include<stdio.h>

int main()
{
    int a, sum=0;
    for(int i=5; i<=50; i++)
    {
        sum = sum+i;
    }
    printf("The of numbers between 5 and 50 is: %d", sum);
}