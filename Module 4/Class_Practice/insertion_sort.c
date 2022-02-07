//Insertion Sort

#include <stdio.h>
void insertion_sort(int [], int);
void print(int [], int);

int main()
{
    int array[] = {6, 5, 3, 2, 8, 77, 434};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Elements of unsorted array:\n");
    print(array, size);
    insertion_sort(array, size);
    printf("Elements of sorted array:\n");
    print(array, size);
    return 0;
}

void insertion_sort(int a[], int n)
{
    int i, j, key;
    for (i = 1; i<n; i++)
    {
        key = a[i];
        j = i-1;
        while (j>= 0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
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
