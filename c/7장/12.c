#include <stdio.h>

int main(void)
{
	int a, b, c, num;

	a = 0;
	b = 1;

	printf("몇 번째 항까지 구할까요? ");
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