#include <stdio.h>

int check()
{
	int call_count = 0;
	
	call_count++;

	if (call_count > 3)
	{
		printf("�α��� �õ� Ƚ�� �ʰ�\n");

		return;
	}

	int n;

	printf("��й�ȣ: ");
	scanf_s("%d", &n);

	if (n == 1234)
	{
		printf("�α��� ����!!\n");
		
		return;
	}
	return;
}

int main(void)
{
	while (1)
	{
		if (check() == 1)
			break;
	}
	return 0;
}