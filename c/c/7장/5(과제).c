#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를입력하시오: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}