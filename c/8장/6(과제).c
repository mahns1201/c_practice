#include <stdio.h>

int even(int n)
{
	n = (n % 2 ==0) ? 1 : 0;

	return n;
}

int absolute(int n)
{
	n = (n > 0) ? n : -n;

	return n;
}

int sign(int n)
{
	if (n > 0) 
		return n = 1;

	else if (n < 0)
		return n = -1;

	else
		return n = 0;
}

void main()
{
	{
		int n;

		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &n);


		if (even(n) == 0)
			printf("even()�� ���: Ȧ��\n");

		else if (even(n) == 1)
			printf("even()�� ���: ¦��\n");

		else if (even(n) == 2)
			printf("even()�� ���: 0\n");

		else
			printf("even()�� ���: ����\n");

		if (absolute(n) == 1)
			printf("absolute()�� ���: %d\n", n);

		else
			printf("absolute()�� ���: %d\n", n * (-1));

		if (sign(n) == 1)
			printf("sign()�� ���: ���\n");

		else if (sign(n) == 0)
			printf("sign()�� ���: 0\n");

		else
			printf("sign()�� ���: ����\n");
	}


}