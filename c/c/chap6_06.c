#include <stdio.h>

int main(void)
{
	int month;

	printf("월 번호를 입력하시오: ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1: printf("Jan\n");
		break;

	case 2: printf("Feb\n");
		break;

	case 3: printf("Mar\n");
		break;

	default:
		printf("1~12의 숫자를 입력하여야 합니다.");
	}
}