#include <stdio.h>

int main()
{
    char* pDays[7];
    char** pLast;

    pDays[0] = "Sunday";
    pDays[1] = "Monday";
    pDays[2] = "Tuesday";
    pDays[3] = "Wednesday";
    pDays[4] = "Thrusday";
    pDays[5] = "Friday";
    pDays[6] = "Saturday";

    printf("Printing 7 days using pointer\n");
    pLast = pDays + 6;
    for (char** pWalker = pDays; pWalker<pLast; pWalker++)
    {
        printf("%s\n", *pWalker);
    }
    return 0;
}