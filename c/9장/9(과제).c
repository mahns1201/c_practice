#include <stdio.h>

int cipher_sum(num)
{
	int sum = 0;

	while (num)
	{
		sum += num % 10;
		num /= 10;
	}
	
	return sum;
}

int main()
{
	printf("12345�� �ڸ��� ���� %d�̴�.", cipher_sum(12345));
}