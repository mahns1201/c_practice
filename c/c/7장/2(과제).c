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
	printf("1~100������ 3�� ����� ����: %d�Դϴ�.", sum);

	return 1;
}