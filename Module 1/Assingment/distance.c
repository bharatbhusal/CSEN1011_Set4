// importing header files
#include <stdio.h>

// main function
int main()
{
    // declaring floating variables
    float kilometer, meter, inches, feet, cm;

    // assinging values to the variables
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometer);

    // calculations
    meter = kilometer * 1000;
    cm = kilometer*100000;
    inches = kilometer*39370.1;
    feet = kilometer*3280.84;

    // displaying results
    printf("Given Kilometers in:\nMeters: %.2f\nCentimeters: %.2f\nInches: %.2f\nFeet: %.2f\n", meter, cm, inches, feet);
    return 0;
}