// 사용자로부터 입력받은 2개의 실수의 합을 계산하여 출력
#include <stdio.h>

int main()
{
	double x, y, sum;

	printf("첫 번째 숫자를 입력하세요. ");
	scanf_s("%lf", &x);

	printf("두 번째 숫자를 입력하세요. ");
	scanf_s("%lf", &y);

	sum = x + y;
	printf("두 수의 합 = %lf", sum);

	return 0;
}

// 자료형을 잘못 지정하면 데이터 값이 정확하게 나오지 않을 수 있다.