#include <stdio.h>

int main()
{
    int a = 5;
    int i = 1;
    table:
        printf("%d * %d = %d\n", a, i, a*i);
        i++;
        if (i<= 10)
            goto table;
    return 0;
}