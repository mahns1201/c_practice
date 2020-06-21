#include <stdio.h>

int get_sum(int array[], int size);

int main(void)
{
	int m[3][6] = { {10, 10, 10, 10, 10, 10},
				    {10, 10, 10, 10, 10, 10},
				    {10, 10, 10, 10, 10, 10}
	};

	int result = 0, sum;

	for (int i = 0; i < 3; i++) {
		sum = get_sum(m[i], 6);
		result += sum;
	}

	printf("정수의 합 = %d\n", result);

	return 0;
}

int get_sum(int array[], int size)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < size; i++)
		sum += array[i];

	return sum;
}