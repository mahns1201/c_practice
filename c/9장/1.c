#include <stdio.h>

int add(int x, int y)
{
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return x + y;
}

int main(void)
{
	char op;
	int x, y;
	int count_plus = 0;

	while (1)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d %c %d", &x, &op, sizeof(op), &y);

		if (op == 'e')
			break;

		switch (op)
		{
		case '+':
			count_plus++;
			printf("���� ��� = %d\n", add(x, y));
			break;
		case '-':
		case '*':
		case '/':

		default:
			printf("��������(+. -, *, /)�� ����մϴ�.\n");
			break;
		}
	}
}