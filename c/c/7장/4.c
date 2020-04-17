#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < (6 - i); j++)
		{
			printf("  ");
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}