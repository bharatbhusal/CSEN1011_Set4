#include <stdio.h>
void shift (int *);

int main()
{
    int x = 100;
    printf("Bfore function call x = %d\n", x);
    shift(&x);
    printf("After function call x = %d\n", x);
    return 0;
}

void shift(int *num)
{
    printf("Before adding value inside function num = %d\n", *num);
    *num += 100;
    printf("After adding value inside function num= %d\n", *num);
}
