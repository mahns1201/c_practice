#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	printf("��� ");

	for (int d = 1; d <= num; d++)
	{
		if (num % d == 0)
			printf("%d ", d);
	}

	return 0;
}