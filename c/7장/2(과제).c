#include <stdio.h>

int main(void)
{
	int sum;
	sum = 0;

	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;

	}
	printf("1~100까지의 3의 배수의 합은: %d입니다.", sum);

	return 1;
}