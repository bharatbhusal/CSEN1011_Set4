#include <stdio.h>

int main()
{
    int array[4][3] = {{12, 23, 34}, {43, 32, 2}, {6, 5, 64}, {60, 5, 6}};
    for (int i = 0; i<4; i++)
    {
         int temp = array[0][0];
        for (int j = 0; j<3; j++)
        {
            if (array[i][j] > temp)
            {
                temp = array[i][j];
            }
        }
        printf("Largest element in row %d: %d\n", i+1, temp);
    }
    return 0;
}