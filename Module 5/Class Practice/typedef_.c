#include <stdio.h>

typedef unsigned int unit;
unit main()
{
    unit i, j, k;
    i = 10;
    j = 20;
    k = i+j;
    printf("Value of i: %u\n", i);
    printf("Value of j: %u\n", j);
    printf("Sum of i and j: %u\n", k);
    return  0;
}