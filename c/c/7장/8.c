#include <stdio.h>

int main(void)
{
	int num;

	while (1)
	{
		printf("������ ���̴�?(���� = -1): ");
		scanf_s("%d", &num);
		if (num == -1)
			break;

		for (int i = 0; i < num; i++)
			printf("*");

		printf("\n");
	}
	return 0;
}