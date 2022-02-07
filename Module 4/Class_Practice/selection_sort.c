//Selection Sort

#include <stdio.h>
void selection_sort(int [], int);
void print(int [], int);
void swap(int *, int *);

int main()
{
    int array[] = {6, 5, 3, 2, 8, 77, 434};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Elements of unsorted array:\n");
    print(array, size);
    selection_sort(array, size);
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

void selection_sort(int a[], int n)
{
    int i, j, min;
    for (i = 0; i<n-1; i++)
    {
        min = i;
        for (j = i+1; j<n; j++)
        {
            if (a[j]< a[min])
            {
                min = j;
            }
        }
        swap(&a[min], &a[i]);
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
