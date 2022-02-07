#include <stdio.h>

int main()
{
    char stri0[] = "Bharat";
    int size = sizeof(stri0)/sizeof(stri0[0])-1;
    char stri1[size+1];

    for (int i = 0; i<size; i++)
    {
        stri1[i] = stri0[size-i-1];
    }
    printf("%s\n", stri1);
    return 0;
}