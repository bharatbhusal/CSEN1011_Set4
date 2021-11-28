// importing HEADER FILE.
#include <stdio.h>

// MAIN function
int main()
{
    // declaring INTEGER variable.
    int num;
    
    // assinging values to INTEGER variable
    printf("Enter a number to check odd or even: ");
    scanf("%d", &num);

    // if else statement to DISPLAY result
    if (num % 2)    //if the expression is anything other than 0(zero), first statement will execute else second statement will execute.
    {
        // if number is not exactly divisible by 2, the number is odd
        printf("%d is an Odd Number!!\n", num);
    }
    else 
    
        // if number is exactly divisible by 2, the number is even 
        printf("%d is an Even Number!!\n", num);
    
    // flower braces for single statements in if statementes are optional.

    return 0;
}
