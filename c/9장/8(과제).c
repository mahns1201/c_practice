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
	printf("12345�� �ڸ����� %d�̴�.", cipher(12345));
}