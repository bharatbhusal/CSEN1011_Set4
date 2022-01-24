#include <stdio.h>

int fun(int);

int main()
{
  int arry[5], i;
  printf("Enter array elements:\n");
  for (i = 0; i<5; i++)
  {
    scanf("%d", &arry[i]);
  }
  printf("Array elements are:\n");
  for (i = 0; i<5; i++)
  {
    printf("%d\n", arry[i]);
  }
  printf("\nValue from function:: %d\n", fun(arry[3]));
  return 0;
}

int fun(a)
{
  a++;
  return a;
}