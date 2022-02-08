#include <stdio.h>

enum months{
    jan = 1,
    feb,
    march,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
};

int main()
{
    for(int i = jan; i<= dec; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}