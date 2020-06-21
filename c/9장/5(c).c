#include <stdio.h>

int recursive(int n)
{
	if (n == 0)
		return 1;

	else
		return (n + recursive(n - 1));
}
int iter(int n)
{
	int sum = 0;
	for (int i = n; i > 0; i--)
		sum += i;
	
	sum += 1;

	return (sum);
}

void main()
{
	printf("result(re) = %d\n", recursive(5));
	printf("result(it) = %d\n", iter(5));
}