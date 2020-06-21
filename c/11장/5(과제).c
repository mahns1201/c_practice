#include <stdio.h>

void convert(float grades[], float scores[], int size)
{
	for (int i = 0; i < size; i++)
		scores[i] = grades[i] * 100 / 4.3;
}

void print(float val[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%.1f\t", val[i]);

	printf("\n");
}

int main(void)
{
	float grades[10] = { 0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3 };
	float scores[10];

	print(grades, 10);
	convert(grades, scores, 10);
	print(scores, 10);

	return 0;
}