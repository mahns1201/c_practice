#include <stdio.h>

const double PI = 3.141592;

double cal_area(double radius)
{
	double area;

	area = PI * radius * radius;

	return area;
}

void main()
{
	double area, radius;
	
	printf("반지름을 입력하시오: ");
	scanf_s("%lf", &radius);

	area = cal_area(radius);
	
	printf("원의 넓이는 %lf입니다.", area);
}

