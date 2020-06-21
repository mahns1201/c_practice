#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count, i;
	int value, sum = 0;
	int* darray;

	printf("정수의 개수: ");
	scanf_s("%d", &count);

	darray = malloc(count * sizeof(int));
	if (darray == NULL) {
		printf("동적 메모리 할당 오류");
		exit(0);
	}



	for (i = 0; i < count; i++)
	{
		printf("양의 정수를 입력하세요. ");
		scanf_s("%d", &darray[i]);

		sum += darray[i];
	}

	printf("정수의 합 = %d\n", sum);

	return 0;
}