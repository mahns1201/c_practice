#include <stdio.h>

void print_value(int num);

int main(void)
{
	int n;

	while (1)
	{
		printf("값을 입력하시오(종료는 음수): ");
		scanf_s("%d", &n);
		if (n < 0)
			break;
		print_value(n);
	}

	return 0;
}

void print_value(int num)
{
	for (int i = 0; i < num; i++)
		printf("*");
	
	printf("\n");
}