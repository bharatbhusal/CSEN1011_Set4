// importing header files
#include <stdio.h>

// main function
int main()
{
    // declaring floating values
    float v_meter, v_centimeter, l_meter, b_meter, h_meter;

    // assinging values to the variables
    printf("Enter length, breadth and height in meters: ");
    scanf("%f %f %f", &l_meter, &b_meter, &h_meter);

    // calculations
    v_meter = l_meter * b_meter* h_meter;
    v_centimeter = v_meter*1000000;

    // displaying the results
    printf("Volume in :\n");
    printf("Meters Cube:%.2f\n", v_meter);
    printf("Centimeter Cube: %.2f\n", v_centimeter);
    
    return 0;
}