#include <stdio.h>

int cipher(num)
{
	int number_of_cipher = 0;

	while (num > 0)
	{
		number_of_cipher++;
		num /= 10;
	}

	return number_of_cipher;
}

int main()
{
	printf("12345의 자릿수는 %d이다.", cipher(12345));
}