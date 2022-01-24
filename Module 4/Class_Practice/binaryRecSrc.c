#include <stdio.h>

int Binaryint_recursive(int array[], int start, int end, int target)
{
  int mid;
  while (start <= end)
  {
    mid=(start+end)/2;
    if (array[mid] == target)
    return mid;
    else if (array[mid]<target) 
    return Binaryint_recursive(array,mid+1,end,target);
    else
    return Binaryint_recursive(array,start,mid-1,target);
  }
  return-1;
}
int main(void)
{
  int n=7;
  int array[7] = {1, 4, 7, 9, 16, 56, 70};
  int target= 163;
  int result= Binaryint_recursive(array, 0, n-1, target);
  if(result==-1)
  printf("Element not found in the array\n");
  else
  printf("Element found at index %d\n",result);
  return 0;
}