#include<stdio.h>
int main()
{
  int i, j, k;
  int arr[2][3][2];
  printf("Enter 12 elements");
  for(i = 0; i < 2; i++)
  {
    for(j = 0; j < 3; j++)
    {
      for(k = 0; k < 2; k++)
      {
      printf("Enter arr[%d][%d][%d]=", i, j, k);
      scanf("%d", &arr[i][j][k]);
      }
    }
  }
  printf("\nThree Dimensional Array:");
  for(i = 0; i < 2; i++)
  {
    printf("\n");
    for(j = 0; j < 3; j++)
    {
      printf("\n");
      for(k = 0; k < 2; k++)
      {
      printf("%d\t", arr[i][j][k]);
      }
    }
  }
  return 0;
}