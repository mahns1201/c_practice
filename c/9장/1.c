#include <stdio.h>

int add(int x, int y)
{
	static int count = 0;
	count++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	return x + y;
}

int main(void)
{
	char op;
	int x, y;
	int count_plus = 0;

	while (1)
	{
		printf("연산을 입력하시오: ");
		scanf_s("%d %c %d", &x, &op, sizeof(op), &y);

		if (op == 'e')
			break;

		switch (op)
		{
		case '+':
			count_plus++;
			printf("연산 결과 = %d\n", add(x, y));
			break;
		case '-':
		case '*':
		case '/':

		default:
			printf("가감승제(+. -, *, /)만 허용합니다.\n");
			break;
		}
	}
}