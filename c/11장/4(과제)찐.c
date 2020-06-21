#include <stdio.h>

void array_print(int *A, int size)
{
	printf("A[] = { ");
	for (int i = 0; i < size; i++) {
		if (i < size - 1)
			printf("%d, ", A[i]);

		else
			printf("%d } ", A[i]);
	}
}

int main(void)
{
	int list[10] = { 1, 2, 3, 4 };
	int n;
	n = sizeof(list) / sizeof(list[0]);

	array_print(list, n);

	return 0;
}