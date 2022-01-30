#include <stdio.h>
int main()
{
  float arr1[2][2], arr2[2][2], sum[2][2];
  //reading elemenets of the matrix_01
  
  printf("Enter  the martix_01 elements:\n");
  for (int i = 0; i<2; i++)
    {
      for (int j = 0; j<2; j++)
        {
          printf("arr1[%d][%d]: ", i, j);
          scanf("%f", &arr1[i][j]);
        }
    }

  printf("\nEnter  the martix_02 elements:\n");
  for (int i = 0; i<2; i++)
    {
      for (int j = 0; j<2; j++)
        {
          printf("arr2[%d][%d]: ", i, j);
          scanf("%f", &arr2[i][j]);
        }
    }

  for (int i = 0; i<2; i++)
    {
      for (int j = 0; j<2; j++)
        {
          sum[i][j] = (arr1[i][j] + arr2[i][j]);
        }
    }

  printf("\nPrint the matrix_sum elements:\n");
  for (int i = 0; i<2; i++)
    {
      for (int j = 0; j<2; j++)
        {
          printf("%.2f\t", sum[i][j]);
        }
      printf("\n");
    }
  return 0;
}
