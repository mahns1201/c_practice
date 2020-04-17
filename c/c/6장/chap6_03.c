#include <stdio.h>

int main(void)
{
	int a, b, c, min;

	printf("3개의 정수를 입력하세요. ");
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

	printf("최소값은 %d입니다.", min);

}