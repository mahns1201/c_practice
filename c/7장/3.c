#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	printf("약수 ");

	for (int d = 1; d <= num; d++)
	{
		if (num % d == 0)
			printf("%d ", d);
	}

	return 0;
}