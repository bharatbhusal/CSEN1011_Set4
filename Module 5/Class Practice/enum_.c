#include <stdio.h>
enum weekdays{
    Sunday = 2,
    Monday,
    Tuesday,
    Wednesday,
    Thrusday,
    Friday
};

int main()
{
    enum weekdays w;
    w = Monday;
    printf("The value of w is %d\n", w);
    // w = Friday;
    // printf("The value of w is %d\n", w);
    return 0;
}