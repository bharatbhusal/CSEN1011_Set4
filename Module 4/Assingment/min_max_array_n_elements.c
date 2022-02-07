#include <stdio.h>
int min(int [], int);
int max(int [], int);
void input(int [], int);

int main()
{
    int array[] = {};
    int size;
    printf("Enter the number of elements to store in the array: ");
    scanf("%d", &size);
    input(array, size);
    printf("The minimum Number is the array: %d\n", min(array, size));
    printf("The maximum Number is the array: %d\n", max(array, size));
    return 0;
}

void input(int a[], int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("Array[%d]: ", i);
        scanf("%d", &a[i]);
    }
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