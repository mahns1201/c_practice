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
	
	printf("�������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &radius);

	area = cal_area(radius);
	
	printf("���� ���̴� %lf�Դϴ�.", area);
}

