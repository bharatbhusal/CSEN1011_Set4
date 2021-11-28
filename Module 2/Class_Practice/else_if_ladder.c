// importing HEADER FILE
#include <stdio.h>

// MAIN function
int main()
{

     // declaring INTEGER variable.
    int num1, num2;
    
    // assinging values to INTEGER variable
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    // if else statement to DISPLAY result
    //if first variable is greater or equal to second variable
    if (num1 > num2)
        printf("%d is greater than %d\n", num1, num2);
    
    // if first variable is EQUAL to second variable.
    else if (num1 == num2)
        printf("Both the numbers are equal!!\n")

    // if first variable is LESS THAN second variable 
    else 
        printf("%d is less than %d\n", num1, num2);

    return 0;
}