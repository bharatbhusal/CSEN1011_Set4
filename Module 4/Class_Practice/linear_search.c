//Linear Search

#include <stdio.h>
int l_search(int [], int, int);

int main()
{
    int array[] = {5, 6, 4, 7, 8, 9, 12, 13, 25, 44};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 13;
    int result = l_search(array, size, target);
    if  (result!= -1)
    printf("The targated number in the given array is in %d index.\n", result);
    else
    printf("The targated number is not in the given array.\n");
    return 0;
}

int l_search(int a[], int s, int t)
{
    for (int i = 0; i<s; i++)
    {
        if (t == a[i])
        return i;
    }
    return -1;
}
