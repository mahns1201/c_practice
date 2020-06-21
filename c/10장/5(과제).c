#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 5

int main(void)
{
	int i, j, row_sum, col_sum;
	int s[ROW][COL] =
	{
		{12, 56, 32, 16, 98},
		{99, 56, 34, 41, 3},
		{65, 3, 87, 78, 21}
	};
	
	for (i = 0; i < ROW; i++)
	{
		row_sum = 0;
		for (j = 0; j < COL; j++)
			row_sum += s[i][j];

		printf("%d행의 합은 %d입니다.\n", i + 1, row_sum);
	}


	for (i = 0; i < COL; i++)
	{
		col_sum = 0;
		for (j = 0; j < ROW; j++)
		{
			col_sum += s[j][i];
		}
		printf("%d열의 합은 %d입니다.\n", i + 1, col_sum);
	}
}
