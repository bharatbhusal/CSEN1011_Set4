#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter String: ");
    gets(str);
    // scanf("%[^\ns", str);
    printf("String is: %s", str);
    printf("Uppercase STring is: %s", strlwr(str));
    return 0;
}
