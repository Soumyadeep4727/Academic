#include<stdio.h>

int main()
{
    // odd numbers (5-50)
    for(int i=5; i<=50; i++)
    {
        if( i%2 == 0 )
        {
            continue;
        }
        printf("%d\n", i);
    }
}