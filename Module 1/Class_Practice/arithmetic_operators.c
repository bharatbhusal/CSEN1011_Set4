#include <stdio.h>


int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int quotient(int, int);
int remainder(int, int);

int main()
{
    int a, b;
    printf("Enter the values: ");
    scanf("%d\n%d", &a, &b);
    printf("Lets try some arithmatic Operators!!\n");
    printf("%d + %d = %d\n", a, b, addition(a, b));
    printf("%d - %d = %d\n", a, b, subtraction(a, b));
    printf("%d * %d = %d\n", a, b, multiplication(a, b));
    printf("%d / %d = %d\n", a, b, quotient(a, b));
    printf("%d %% %d = %d\n", a, b, remainder(a, b));

    return 0;
}

// Addition
int addition(int x, int y)
{
    return (x+y);
}
// Subtraction
int subtraction(int x, int y)
{
    return (x-y);
}
// Multiplication
int multiplication(int x, int y)
{
    return (x*y);
}
// Quotient
int quotient(int x, int y)
{
    return (x/y);
}
// Remainder
int remainder(int x, int y)
{
    return (x%y);
}