#include <stdio.h>

int main(void)
{
	double height, weight, std_weight;

	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf_s("%lf %lf", &height, &weight);

	std_weight = (height - 100) * 0.9;

	if (weight < std_weight * 0.9)
		printf("����� ��ü���Դϴ�.\n");

	else if (weight > std_weight * 1.1)
		printf("����� ��ü���Դϴ�.\n");

	else
		printf("����� ǥ��ü���Դϴ�.\n");

	return 0;
}