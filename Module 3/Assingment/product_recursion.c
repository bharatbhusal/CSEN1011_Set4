//Product of two numbers using recursion

#include <stdio.h>
#include <stdlib.h>

int product(int, int); 

int main()
{
    int num1, num2, result; 
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2); 
    result = product(num1, num2);
    printf("Product of %d and %d: %d\n", num1, num2, result);
    return 0;
}

int product(int a, int b)
{
    if(a < b)
    return product(b, a);
    else if(b != 0)
    return (a + product(a, b - 1));
    else
    return 0;
}