#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count, i;
	int value, sum = 0;
	int* darray;

	printf("������ ����: ");
	scanf_s("%d", &count);

	darray = malloc(count * sizeof(int));
	if (darray == NULL) {
		printf("���� �޸� �Ҵ� ����");
		exit(0);
	}



	for (i = 0; i < count; i++)
	{
		printf("���� ������ �Է��ϼ���. ");
		scanf_s("%d", &darray[i]);

		sum += darray[i];
	}

	printf("������ �� = %d\n", sum);

	return 0;
}