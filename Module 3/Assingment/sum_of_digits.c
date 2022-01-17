//Sum of digits of a number. Numbers must be passed to a function using pointers

#include <stdio.h>

int solve(int *a, int *b)
{
    int temp = *a + *b;
    *b = *a - *b;
    *a = temp;
}

int main()
{
    int a = 5;
    int b = 8;
    solve(&a, &b);
    printf("a + b = %d and a - b = %d\n", a, b);
}
