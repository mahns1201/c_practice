#include <stdio.h>

int main(void)
{
	int a, b, c, min;

	printf("3���� ������ �Է��ϼ���. ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		if (a < c)
			min = a;
		else
			min = c;
	}

	else
	{
		if (b < c)
			min = b;
		else
			min = c;
	}

	printf("�ּҰ��� %d�Դϴ�.", min);

}