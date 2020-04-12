#include <stdio.h>

int main(void)
{
	double height, weight, std_weight;

	printf("체중과 키를 입력하세요: ");
	scanf_s("%lf %lf", &height, &weight);

	std_weight = (height - 100) * 0.9;

	if (weight < std_weight * 0.9)
		printf("당신은 저체중입니다.\n");

	else if (weight > std_weight * 1.1)
		printf("당신은 과체중입니다.\n");

	else
		printf("당신은 표준체중입니다.\n");

	return 0;
}