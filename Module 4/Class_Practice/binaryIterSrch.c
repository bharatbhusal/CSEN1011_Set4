#include <stdio.h>

int Binaryint_iterative(int array[], int start, int end, int target)
{
  int mid;
  while (start <= end)
  {
    mid = (start + end) / 2;
    if (array[mid] == target)
    return mid;
    else if (array[mid] < target) 
    start = mid + 1;
    else
    end = mid - 1;
  }
  return - 1;
}
int main(void)
{
  int n = 7;
  int array[7] = {1, 4, 7, 9, 16, 56, 70};
  int target = 16;
  int result = Binaryint_iterative(array, 0, n-1, target);
  if(result == -1)
  printf("Element not found in the array\n");
  else
  printf("Element found at index %d\n", result);
  return 0;
}