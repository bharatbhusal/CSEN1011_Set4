// importing header file
#include <stdio.h>

// main function
int main()
{
    // declaring floating variable
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    // if ladder statement for display the result 
    // if variable is greater than 85 and equals to or less than 100.
    if (marks > 85 && marks <= 100)
    {
        printf("Congrats!! you cored grade A.\n");
    }

    // if variable is greater than 60 and equals to or less than 85.
    else if (marks> 60 && marks <= 85)
    {
        printf("You scored grade B+.\n");
    }

    // if variable is greater than 40 and equals to or less than 60.
    else if (marks >40 && marks <= 60)
    {
        printf("You scored garde B.\n");
    }

    // if variable is greater than 30 and equals to or less than 40.
    else if (marks> 30 && marks <= 40)
    {
        printf("You scored grade C.\n");
    }

    // if variable is less than 30.
    else
    {
        printf("Sorry! You are fail.\n");
    }

    return 0;
}