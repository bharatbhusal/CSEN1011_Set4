// including header files
#include <stdio.h>
#include <math.h>

// main function
int main()
{

    // declaring floating variables
    float p, t, r, amount, ci;

    // assinging values to the variables
    printf("Enter principal, time, rate: ");
    scanf("%f %f %f", &p, &t, &r);

    // calculations
    amount = p*pow((1+r/100), t); 
    ci = amount -p;
    
    // displaying the result
    printf("Compound Interest: %.2f\n", ci);
    return 0;
}

// add -lm after "-o filename"