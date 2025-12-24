#include<stdio.h>

int main()
{
    int a, b, c, smallest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    smallest = a;
    if( b < smallest)
    {
        smallest = b;
    }
    if( c < smallest)
    {
        smallest = c;
    }
    printf("The smallest number is: %d", smallest);
}