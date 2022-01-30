#include <stdio.h>
void bubble_sort(int [], int);
void print(int [], int);
void swap(int *, int *);

int main()
{
    int array[] = {6, 5, 3, 2, 8, 77, 434};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Elements of unsorted array:\n");
    print(array, size);
    bubble_sort(array, size);
    printf("Elements of sorted array:\n");
    print(array, size);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int a[], int n)
{
    int i, j;
    for (i = 0; i<n; i++)
    {
        for (j = 0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            swap(&a[j], &a[j+1]);
        }
    }
}

void print(int a[], int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
