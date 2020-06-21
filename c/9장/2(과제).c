#include <stdio.h>
#include <time.h>

void get_dice_face();

int main(void)
{
	int i;
	
	srand((unsigned int)time(NULL));
	
	for (i = 0; i < 1000; i++)
		get_dice_face();
	
	return 0;
}

void get_dice_face()
{
	static int n1, n2, n3, n4, n5, n6;
	n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;

	int face;

	face = (rand() % 6) + 1;

	switch (face)
	{
	case 1:
		n1++; break;
	case 2:
		n2++; break;
	case 3:
		n3++; break;
	case 4:
		n4++; break;
	case 5:
		n5++; break;
	case 6:
		n6++; break;

	}
}
