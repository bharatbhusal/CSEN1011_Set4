#include <stdio.h>
int min(int [], int);
int max(int [], int);

int main()
{
    int array[] = {5, 4, 2, 5, 4, 7, 54, 43, 323, 10};
    int size = sizeof(array)/sizeof(array[0]);
    printf("The minimum Number is the array: %d\n", min(array, size));
    printf("The maximum Number is the array: %d\n", max(array, size));
    return 0;
}

int min(int a[], int n)
{
    int result = a[0];
    for (int i = 1; i<n; i++)
    {
        if (a[i] < result)
        {
            result = a[i];
        }
    }
    return result;
}


int max(int a[], int n)
{
    int result = a[0];
    for (int i = 1; i<n; i++)
    {
        if (a[i] > result)
        {
            result = a[i];
        }
    }
    return result;
}