#include <stdio.h>

int main()
{
    char strin[] = "bharat";
    int size = sizeof(strin)/sizeof(strin[0])-1;
    int v_count = 0;
    int c_count = 0;
    for (int i = 0; i<size; i++)
    {
        if (strin[i] == 'a' || strin[i] == 'e' || strin[i] == 'i' || strin[i] == 'o' || strin[i] == 'u')
        {
            v_count += 1;
        }
        else
        {
            c_count +=1;
        }
    }
    printf("The given string has %d vowel letters and %d consonent letters\n", v_count, c_count);
    return 0;
}