#include <stdio.h>

int main()
{
  int arry[5], i;
  printf("Enter array elements:\n");
  for (i = 0; i<5; i++)
  {
    scanf("%d", &arry[i]);
  }
  printf("\nArray elements are:\n");
  for (i = 0; i<5; i++)
  {
    printf("%d\n", arry[i]);
  }
  return 0;
}