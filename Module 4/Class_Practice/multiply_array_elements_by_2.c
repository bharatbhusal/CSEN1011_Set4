#include <stdio.h>

void multiply(int *a, int n)
{
    int *k;
    k = a+n-1;

    for (int *i = a; i<k; i++)
    {
        *i *= 2;
    }
}

void print(int *a, int n)
{
    int *k;
    k = a+(n-1);
    
    for (int *i = a; i<k; i++)
    {
        printf("%d\t", *i);
    }
    printf("\n");
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Elements of the array before multiplication\n");
    print(array, size);
    multiply(array, size);
    printf("Elements of the array after multiplication\n");
    print(array, size);
    return 0;

}