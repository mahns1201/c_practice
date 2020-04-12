#include <stdio.h>

int main(void)
{
	int x, y;

	printf("2개의 정수를 입력하세요.");
	scanf_s("%d %d", &x, &y);

	printf("몫 : %d 나머지 : %d\n", x / y, x % y);

	return 0;
}