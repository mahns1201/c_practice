// 사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력
#include <stdio.h>

int main()
{
	int x, y, sum;

	printf("첫 번째 숫자를 입력하세요. ");
	scanf_s("%d", &x);

	printf("두 번째 숫자를 입력하세요. ");
	scanf_s("%d", &y);

	sum = x + y;
	printf("두 수의 합 = %d", sum);

	return 0;
}