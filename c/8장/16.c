#include <stdio.h>

double factorial(int n)
{
	double result = 1;

	for (int i = 1; i <= n; i++)
		result *= i;

	return result;
}

int main(void)
{
	int n;

	printf("������ ����ұ��: ");
	scanf_s("%d", &n);

	double euler = 1;

	for (int i = 1; i <= n; i++)
		euler += 1.0 / factorial(i);

	printf("���Ϸ� �� = %lf\n", euler);

	return 0;
}