#include <stdio.h>

int b_search(int [], int, int, int);

int main()
{
    int array[] = {5, 6, 4, 7, 8, 9, 12, 13, 25, 44};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 13;
    int result = b_search(array, 0, size, target);
    if  (result!= -1)
    printf("The targated number in the given array is in %d index.\n", result);
    else
    printf("The targated number is not in the given array.\n");
    return 0;
}

int b_search(int a[], int x, int y, int t)
{
    while (x<= y)
    {
        int mid = (x+y)/2;
        if (a[mid] == t)
        return mid;
        else if (a[mid] < t)
        return b_search(a, mid+1, y, t);
        else if (a[mid]>t)
        return b_search(a, x, mid-1, t);
    }
    return -1;
}