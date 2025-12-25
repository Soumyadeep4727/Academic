#include<stdio.h>

int main()
{
    // Grade check
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if ( marks>=90  &&  marks <=100)
    {
        printf("The student got A+");
    }
    else if ( marks>=70  &&  marks<=90)
    {
        printf("The student got A");
    }
    else if ( marks>=30  &&  marks<=70)
    {
        printf("The student got B");
    }
    else {
        printf("The student got C");
    }
}