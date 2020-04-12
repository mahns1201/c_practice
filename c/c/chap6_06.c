#include <stdio.h>

int main(void)
{
	int month;

	printf("�� ��ȣ�� �Է��Ͻÿ�: ");
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
		printf("1~12�� ���ڸ� �Է��Ͽ��� �մϴ�.");
	}
}