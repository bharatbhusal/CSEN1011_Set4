#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *prt = arr;
    printf("%p\n", prt);
    printf("%p\n", &arr[0]);
    printf("%p\n", arr);
    return 0;
}