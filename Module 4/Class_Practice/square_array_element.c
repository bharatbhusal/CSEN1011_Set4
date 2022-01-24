#include <stdio.h>
#define ARR_SIZE 5
int inp(int arr[], int size);
int disp(int arr[], int size);

int main()
{
  int arry[ARR_SIZE], i;
  printf("Enter array elements:\n");
  inp(arry, ARR_SIZE);
  printf("Square of array elements are:\n");
  disp(arry, ARR_SIZE);
}

int inp(int a[], int s)
{
  int i;
  for (i = 0; i<ARR_SIZE; i++)
  {
    scanf("%d", &a[i]);
  }
  return 0;
}

int disp(int a[], int s)
{
  int i;
  for (i = 0; i<ARR_SIZE; i++)
  {
    printf("%d\n", a[i]*a[i]);
  }
  return 0;
}