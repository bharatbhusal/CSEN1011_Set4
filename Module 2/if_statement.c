// importing header file.
#include <stdio.h>

// main function
int main()
{
    // declaring integer variable.
    int num;
    
    // assinging values to integer variable
    printf("Enter a number to check odd or even: ");
    scanf("%d", &num);

    // if else statement to display result
    if (num % 2)
    {
        // if number is not exactly divisible by 2, the number is odd
        printf("Odd!!\n");
    }
    else 
    {
        // if number is exactly divisible by 2, the number is even 
        printf("Even!!\n");
    }
    return 0;
}