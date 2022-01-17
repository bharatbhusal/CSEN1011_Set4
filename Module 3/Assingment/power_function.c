//Power of a number using functions

#include<stdio.h>

int Power(int, int);

int main()
{
    int base, exponent, result;
    printf("Enter base and exponent values: ");
    scanf("%d %d", &base, &exponent);
    
    result = Power(base, exponent);
    printf("\n%dth power of %d: %d\n", exponent, base, result);
    return 0;
}

int Power(int base,int exponent)
{
    int result = 1;

    while(exponent != 0)
    {
        result = result * base;
        exponent--;
    }
    return result;
}