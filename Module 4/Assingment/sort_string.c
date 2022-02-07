#include <stdio.h>
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;

}

void sort(char s[], int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            if (s[j] > s[j+1])
            {
                swap(&s[j], &s[j+1]);
            }
        }
    }
}

int main()
{
    char string[] = "a quick brown fox jumps over the lazy dog!!";
    int size = sizeof(string)/sizeof(string[0])-1;
    sort(string, size);
    printf("sorted string: %s\n", string);
    return 0;
}