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
	printf("12345의 자릿수 합은 %d이다.", cipher_sum(12345));
}