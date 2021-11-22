// importing header file
#include <stdio.h>

// main function
int main()
{
    // declaring floating variables
    float a_meter, a_kilometer, l_meter, b_meter;

    // declaring values to the variables
    printf("Enter length and breadth in meters: ");
    scanf("%f %f", &l_meter, &b_meter);

    // calculations
    a_meter = l_meter * b_meter;
    a_kilometer = a_meter/1000000;

    // displaying results
    printf("Area in :\n");
    printf("Meters Square:%.2f\n", a_meter);
    printf("Kilometer Square: %.4f\n", a_kilometer);
    
    return 0;
}