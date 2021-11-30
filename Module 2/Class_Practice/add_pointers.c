#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int *p, *q, *r;
    p = &a;
    q = &b;
    r = &c;
    c = *p+*q;
    printf("Addition: %d\n", *r);
    

    return 0;
}