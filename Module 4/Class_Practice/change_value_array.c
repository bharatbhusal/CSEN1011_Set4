#include <stdio.h>

int disp(int a[], int s);
int inp(int a[], int s);
int change(int **a, int s);

int main()
{
  int arry[5], i;
  printf("Enter array elements:\n");
  inp(arry, 5);
  change(&arry, 5);
  printf("Array elements are:\n");
  disp(arry, 5);
  
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


int disp(int a[], int s)
{
  int i;
  for (i = 0; i<5; i++)
  {
    printf("%d\n", a[i]);
  }
  return 0;
}

int change(int **a, int s)
{
  int i;
  for (i = 0; i<5; i++)
  {
    *a[i] = *a[i]*2;
  }

  return 0;
}