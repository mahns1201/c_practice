#include <stdio.h>

int even(int n)
{
	n = (n % 2 ==0) ? 1 : 0;

	return n;
}

int absolute(int n)
{
	n = (n > 0) ? n : -n;

	return n;
}

int sign(int n)
{
	if (n > 0) 
		return n = 1;

	else if (n < 0)
		return n = -1;

	else
		return n = 0;
}

void main()
{
	{
		int n;

		printf("정수를 입력하시오: ");
		scanf_s("%d", &n);


		if (even(n) == 0)
			printf("even()의 결과: 홀수\n");

		else if (even(n) == 1)
			printf("even()의 결과: 짝수\n");

		else if (even(n) == 2)
			printf("even()의 결과: 0\n");

		else
			printf("even()의 결과: 음수\n");

		if (absolute(n) == 1)
			printf("absolute()의 결과: %d\n", n);

		else
			printf("absolute()의 결과: %d\n", n * (-1));

		if (sign(n) == 1)
			printf("sign()의 결과: 양수\n");

		else if (sign(n) == 0)
			printf("sign()의 결과: 0\n");

		else
			printf("sign()의 결과: 음수\n");
	}


}