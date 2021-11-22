// importing header file
#include <stdio.h>

// main function
int main()
{
    // declaring floating variables
    float fahrenheit, celsius;

    // assinging values to the variables
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);

    // calculations
    fahrenheit = ((celsius*9)/5)+32;

    // displaying result
    printf("Temperature in fahreheit: %.2f\n", fahrenheit);
    
    return 0;
    
}