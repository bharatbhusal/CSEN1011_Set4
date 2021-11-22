#include <stdio.h>

int main()
{

     // declaring integer variable.
    int num1, num2;
    
    // assinging values to integer variable
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    // if else statement to display result
    //if first variable is greater or equal to second variable
    if (num1 > num2)
        printf("%d is greater than %d\n", num1, num2);
    
    // if friest variable is equal to second variable.
    else if (num1 == num2)
        printf("Both the numbers are equal!!\n")

    // if first variable is less than second variable 
    else 
        printf("%d is less than %d\n", num1, num2);

    return 0;
}