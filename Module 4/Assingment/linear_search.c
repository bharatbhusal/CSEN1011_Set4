#include <stdio.h>
int l_search(int [], int, int);

int main()
{
    int array[] = {4, 5, 3, 2, 8, 80, 60, 77};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 8;
    int result = l_search(array, target, size);
    if (result != -1)
    printf("%d is in index %d\n", target, result);
    else
    printf("The target element is not in the given array.\n");
    return 0;
}

int l_search(int a[], int t, int s)
{
    for (int i = 0; i<s; i++)
    {
        if (a[i] == t)
        {
            return i;
        }
    }
    return -1;
}