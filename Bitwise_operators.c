// C Program to demonstrate use of bitwise operators
#include <stdio.h>
int main()
{
	// a = 5(00000101), b = 9(00001001)
	int a = 20, b = 212;

	// The result is 00000001
	printf("a = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a & b);

	// The result is 00001101
	printf("a|b = %d\n", a | b);

	// The result is 00001100
	printf("a^b = %d\n", a ^ b);

	// The result is 11111010
	printf("~a = %d\n", a = ~a);

	// The result is 00010010
	printf("b<<2 = %d\n", b << 2);

	// The result is 00000100
	printf("b>>2 = %d\n", b >> 2);

	return 0;

}
