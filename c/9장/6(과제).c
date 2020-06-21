#include <stdio.h>

int power(int base, int power_raised)
{
	int result = 1;

	for (int i = 1; i <= power_raised; i += 1)
		result = result * base;

	return result;
}

int main()
{
	printf("2^5 = %d", power(2, 5));
}