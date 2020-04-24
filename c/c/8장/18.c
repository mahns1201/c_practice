#include <stdio.h>

void print_menu()
{
	printf("==============================\n");
	printf("MENU                  \n");
	printf("==============================\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
}

int add(int a, int b)
{
	return (a + b);
}

int sunstract(int a, int b)
{
	return (a - b);
}

int multiply(int a, int b)
{
	return (a * b);
}

int divide(int a, int b)
{
	return ((float) a / (float) b);
}

int modulus(int a, int b)
{
	return (a % b);
}

int main()
{
	print_menu();

	int your_choice;
	int a;
	int b;
	char confirm;

	do
	{
		printf("원하는 메뉴를 선택하시오(1-5): ");
		scanf_s("%d", &your_choice);

		printf("숫자 2개를 입력하시오: ");
		scanf_s("%d %d*c", &a, &b);        //*c가 없으면 enter (\n)가 입력되어 버퍼에 남는다.

		switch (your_choice)
		{
		case 1: printf("연산결과: %d", add(a, b)); break;
		case 2: printf("연산결과: %d", sunstract(a, b)); break;
		case 3: printf("연산결과: %d", multiply(a, b)); break;
		case 4: printf("연산결과: %2f", divide(a, b)); break;
		case 5: printf("연산결과: %d", modulus(a, b)); break;

		default: printf("잘못된 연산\n");
		}

		printf("\n");
		printf("계속하려면 y를 누르시오: ");
		scanf_s("%c", &confirm);
	} while (confirm == 'y' || confirm == 'Y');

	return 0;
}