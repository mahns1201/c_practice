#include <stdio.h>

int main()
{
	double w, h;
	double area, perimeter;

	printf("사각형의 너비를 입력하세요. ");
	scanf_s("%lf", &w);

	printf("사각형의 높이를 입력하세요. ");
	scanf_s("%lf", &h);
	area = w * h;
	perimeter = (w + h) * 2;

	printf("사각형의 넓이 = %lf\n", area);
	printf("사각형의 둘레 = %lf\n", perimeter);

	return 0;
}