#include <stdio.h>

int main(void)
{
	int x, y, z;
	int max;

	printf("3개의 정수를 입력하세요: ");
	scanf_s("%d %d %d", &x, &y, &z);

	max = (x > y) ? x : y;
	max = (z > max) ? z : max;

	printf("최대값: %d\n", max);

	return 0;
}