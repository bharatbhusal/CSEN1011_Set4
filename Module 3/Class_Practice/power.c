#include <stdio.h>
#include <math.h>

int power(int, int);

int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    printf("The square of %d is %d\n",a, power(a, b));
    return 0;
}

int power(int x, int y)
{
    return pow(x, y);
}