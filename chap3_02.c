//원의 면적을 계산하는 프로그램
#include <stdio.h>

#define PI 3.141592			//메크로상수는 관례적으로 대문자 사용
int main()
{
	//const double pi = 3.141592;	//cosnt상수	
	double radius, area, permiter;

	printf("원의 반지름을 입력하세요. ");
	scanf_s("%lf", &radius);

	area = PI * radius * radius;
	printf("원의 면적 = %lf\n", area);

	permiter = 2 * PI * radius;
	printf("원의 둘레 = %lf \n", permiter);

	return 0;
}
