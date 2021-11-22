// importing header files
#include <stdio.h>


// main function
int main()
{

    // declaring floating variables
    float basic, hra, ta, others, net_salary, pf, it, da;

    // assinging values to the variables
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    printf("Enter HRA: ");
    scanf("%f", &hra);
    printf("Enter TA: ");
    scanf("%f", &ta);
    printf("Enter Others : ");
    scanf("%f", &others);

    // calculations
    da = (basic*12)/100;
    pf = (basic*14)/100;
    it = (basic*15)/100;
    net_salary = basic + da + hra + ta + others - (pf + it);

    // displaying results
    printf("\nNet Salary: %.2f\n", net_salary);

    // return 0;
}