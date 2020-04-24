#include <stdio.h>

float get_tax(int income);        //메인보다 밑에 함수가 있으므로 함수 원형을 위에 적어줘야 함.

int main(void)
{
	int income;

	printf("소득을 입력하시오(단위: 만원): ");
	scanf_s("%d", &income);

	printf("소득세는 %f입니다.\n", get_tax(income));

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