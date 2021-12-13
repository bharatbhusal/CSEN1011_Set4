d func(void)
{
    static int i = 5; //local static variable
    i++;
    printf("i is %d and count is %d\n", i, count);
}