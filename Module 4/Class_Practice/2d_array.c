#include <stdio.h>

int main()
{
  int arr[4][3];
  printf("Enter the elements of the 2D array: \n");
  for (int i = 0; i<4; i++)
  {
    for (int j = 0; j<3; j++)
    {
      printf("arr[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }

  printf("Elements of the 2d array: \n");
  for (int i = 0; i<4; i++)
    {
    for (int j = 0; j<3; j++)
      {
        printf("%d\t", arr[i][j]);
      }
      printf("\n");
    }
}