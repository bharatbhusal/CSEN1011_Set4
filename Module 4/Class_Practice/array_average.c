#include <stdio.h>
int inp(int a[], int s);
int avg(int a[], int s);


int main()
{
  int arry[5], i;
  printf("Enter array elements:\n");
  inp(arry, 5);
  printf("The average of the elements of the given array is %d\n", avg(arry, 5)); 
  return 0;
}

int inp(int a[], int s)
{
  int i;
  for (i = 0; i<5; i++)
  {
    scanf("%d", &a[i]);
  }
  return 0;
}

int avg(int a[], int s)
{
  int i;
  int sum = 0;
  for (i = 0; i<5; i++)
  {
    sum += a[i];
  }
  return sum/s;
}