//Power of a number using recursion

#include <stdio.h>
#include <math.h>

double pwr(double, int);

int main()
{
    double base, power;
    int expo;
    printf("Enter Base: ");
    scanf("%lf", &base);
    printf("Enter Exponent: ");
    scanf("%d", &expo);
    power = pwr(base, expo);
    printf("%dth power to %.2lf = %.2f\n", expo, base, power);
    return 0;
}

double pwr(double base, int expo)
{
    if(expo == 0)
    return 1;
    else if(expo > 0)
    return base * pwr(base, expo - 1);
    else
    return 1 / pwr(base, -expo);
}