#include <stdio.h>

int main()
{
    int matrix[4][3] = {{12, 23, 34}, {43, 32, 2}, {6, 5, 64}, {60, 5, 6}};
    int t_matrix[3][4];
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<4; j++)
        {
            t_matrix[i][j] = matrix[j][i];
        }
    }

    printf("Elements of orginal matrix: \n");
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Elements of transpose matrix: \n");
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<4; j++)
        {
            printf("%d\t", t_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}