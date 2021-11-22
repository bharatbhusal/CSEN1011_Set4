// importing header files
#include <stdio.h>

// main function
int main()
{

    // declaring integer variables
    int num, div;

    // assinging the values to the variables
    printf("Enter the number and divisor: ");
    scanf("%d %d", &num, &div);

    // working with cases
    while (div<=num)
    {
        // if first variable is greater than or equal to the second one.
        num -= div;
    }
    // if first variable is less than the second one. Above while loop ends

    // displaying the result
    printf("The remainder: %d\n", num);
    
    return 0;
}