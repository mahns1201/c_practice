#include <stdio.h>

float get_tax(int income);        //���κ��� �ؿ� �Լ��� �����Ƿ� �Լ� ������ ���� ������� ��.

int main(void)
{
	int income;

	printf("�ҵ��� �Է��Ͻÿ�(����: ����): ");
	scanf_s("%d", &income);

	printf("�ҵ漼�� %f�Դϴ�.\n", get_tax(income));

	return 0;
}

float get_tax(int income)
{
	float tax, tax1, tax2;

	if (income > 1000)
	{
		tax1 = 1000 * 0.08;
		tax2 = (income - 1000) * 0.1;
		tax = tax1 + tax2;
	}

	else
		tax = income * 0.08;

	return tax;
}