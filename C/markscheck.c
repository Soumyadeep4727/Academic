#include<stdio.h>

int main()
{
    int marks;
    printf("Enter your marks(0-100): ");
    scanf("%d", &marks);
    
    // Using IF-ELSE statement
    if (marks <30)
    {
        printf("The student has failed.");
    }
    else if (marks>30  &&  marks<=100 ) 
    {
        printf("The student has failed.");    
    }
    else 
    {
        printf("Invalid Input");
    }


}