// importing header files
#include <stdio.h>

// main function
int main()
{
    // declaring floating variables
    float p, t, r, si;

    // assinging values to the variables
    printf("Enter principal, time, rate: ");
    scanf("%f %f %f", &p, &t, &r);

    // calculations
    si = (p*t*r)/100;

    // display the result
    printf("Simple Interest: %.2f\n", si);
    
    return 0;
}