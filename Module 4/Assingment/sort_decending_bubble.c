#include <stdio.h>
void bubble_sort(int [], int);
void swap(int *, int *);
void print_elements(int [], int);

int main()
{
    int array[] = {4, 5, 43, 32, 55, 4, 3, 656, 767, 55, 45, 34, 23};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Unsorted Array:\n");
    print_elements(array, size);
    printf("\nSorted Array using Bubble sort:\n");
    bubble_sort(array, size);
    print_elements(array, size);
    return 0;
}

void bubble_sort(int a[], int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            if (a[j] <a[j+1])
            {
                swap(&a[j], &a[j+1]);

            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_elements(int a[], int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}