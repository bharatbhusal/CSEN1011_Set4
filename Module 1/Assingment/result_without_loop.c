// importing headr files
#include <stdio.h>

// main function
int main()
{

    // declaring floating variables
    float  m1, m2, m3, m4, m5, fmarks, total, avg, percent;

    // assinging the values to the variables
    printf("Enter the marks of all subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    printf("Enter the total full marks: ");
    scanf("%f", &fmarks);

    // calculations
    total = m1+m2+m3+m4+m5;
    avg = total /5;
    percent = (total / fmarks)*100;

    // displaying the result
    printf("Total: %.2f\nAvereage: %.2f\nPercentage: %.2f%%\n", total, avg, percent);
    
    return 0 ;
}