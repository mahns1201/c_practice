/* 두 개의 정수 합을 계산하는 프로그램 */
#include <stdio.h>

int main()
{
	int x;		// 정수형 변수
	int y;
	int sum;

	x = 100;
	y = 200;

	sum = x + y;
	printf("두 수: %d %d \n", x, y);
	printf("두 수의 합: %d", sum);

	return 0;
}