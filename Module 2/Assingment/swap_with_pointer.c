#include <stdio.h>

int main()
{
    int *ptr1, *ptr2;
    int a, b, *temp;
    a = 5;
    b = 10;
    ptr1 = &a;
    ptr2 = &b;
    printf("Before swap: a = %d, b = %d\n", *ptr1, *ptr2);
    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    printf("After swap: a = %d, b = %d\n", *ptr1, *ptr2);
    return 0;
}