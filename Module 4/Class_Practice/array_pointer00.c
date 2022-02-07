#include <stdio.h>
int main()
{
    int array[5] = {4, 6, 18, 20, 21};
    int *p = &array[1];
    printf("%d, %d\n", array[0], p[2]);
    printf("%d, %d\n", array[1], p[0]);
    printf("%d, %d\n", *array, p[1]);
    printf("%d, %d\n", *array, *p);

    return 0;
}
