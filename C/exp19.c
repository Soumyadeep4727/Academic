#include<stdio.h>

int main()
{
    // table in reverse
    int d, multi;
    printf("Enter a number: ");
    scanf("%d", &d);

    for(int i=10; i>=1; i--)
    {
        multi= d*i;
        printf("The table in reverse order: %d\n", multi);
    }
    
}