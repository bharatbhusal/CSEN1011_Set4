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
    if (num % 2)    //if the expression is anything other than 0(zero), first statement will execute else second statement will execute.
    
        // if number is not exactly divisible by 2, the number is odd
        printf("%d is an Odd Number!!\n", num);
   
    // flower braces for single statements in if statementes are optional.

    return 0;
}
