#include <stdio.h>

int lsearch(int a[], int n, int x);

int main()
{
  int arr[] = {1, 4, 3, 5, 6, 8, 3, 9, 44, 43, 33};
  int n = sizeof(arr) - sizeof(arr[0]);
  int x  = 43;
  int result = lsearch(arr, n, x);
  if (result != -1)
  printf("%d is in %d index in the above array.\n", x, result);
  else
  printf("%d is not in above array\n", x);
  return 0;
}

int lsearch(int a[], int n, int x)
{
  for (int i = 0; i<n; i++)
  if (a[i] == x)
  return i;
  return -1;
}
