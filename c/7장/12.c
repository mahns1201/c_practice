#include <stdio.h>

int main(void)
{
	int a, b, c, num;

	a = 0;
	b = 1;

	printf("�� ��° �ױ��� ���ұ��? ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
	}

	return 0;
}