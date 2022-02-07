#include <stdio.h>
int main()
{
    char s[20] = "Problemsolving";
    int i = 0;
    int count = 0;
    while (i < 11)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
        {
            count++;
        }
        i++;
    }
    printf("There are %d vowels in the given string.\n", count);
    return 0;
}