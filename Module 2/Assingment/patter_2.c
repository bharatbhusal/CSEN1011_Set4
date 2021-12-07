#include <stdio.h>

int main()
{
    int i, j;
    for (i = 65; i<=69; i++)
    {
        for (j = 0; j< i-64; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    return 0;
}