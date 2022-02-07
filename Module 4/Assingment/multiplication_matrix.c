#include <stdio.h>
void print(int [], int, int);
void input(int [], int, int);
int main()
{
    int row, col_0, col;
    printf("Enter number of rows of first matrix(rows of first and rows of product matrix should be equal): ");
    scanf("%d", &row);
    printf("Enter number of columns of first matrix(columns of first matrix and rows of second matrix should be equal): ");
    scanf("%d", &col_0);
    printf("Enter number of columns of second matrix(columns of second matrix and columns of product matrix should be equal): ");
    scanf("%d", &col);

    int mat1[row][col_0]; 
    int mat2[col_0][col]; 
    int pro[row][col];

    printf("Enter the elements of first matrix:\n");
    input(mat1, row, col_0);
    printf("Enter the elements of second matrix:\n");
    input(mat2, col_0, col);
    for (int i = 0; i<row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            pro[i][j] = 0;
            for (int k = 0; k<col; k++)
            {
                pro[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }    
    printf("Print the elements of first matrix: \n");
    print(mat1, row, col_0);
    printf("Print the elements of second matrix: \n");
    print(mat2, col_0, col);
    printf("Print the elements of product matrix: \n");
    print(pro, row, col);
    return 0;
}
void print(int *matr, int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
      {
        printf("%d\t", *((matr+i*c) + j));
      }
    printf("\n");
    }
}
void input(int *matr, int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
      {
        printf("Matrix[%d][%d]: ", i, j);
        scanf("%d", ((matr+i*c) + j));
      }
    }
}
