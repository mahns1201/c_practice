#include <stdio.h>

void print_menu()
{
	printf("==============================\n");
	printf("MENU                  \n");
	printf("==============================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
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
		printf("���ϴ� �޴��� �����Ͻÿ�(1-5): ");
		scanf_s("%d", &your_choice);

		printf("���� 2���� �Է��Ͻÿ�: ");
		scanf_s("%d %d*c", &a, &b);        //*c�� ������ enter (\n)�� �ԷµǾ� ���ۿ� ���´�.

		switch (your_choice)
		{
		case 1: printf("������: %d", add(a, b)); break;
		case 2: printf("������: %d", sunstract(a, b)); break;
		case 3: printf("������: %d", multiply(a, b)); break;
		case 4: printf("������: %2f", divide(a, b)); break;
		case 5: printf("������: %d", modulus(a, b)); break;

		default: printf("�߸��� ����\n");
		}

		printf("\n");
		printf("����Ϸ��� y�� �����ÿ�: ");
		scanf_s("%c", &confirm);
	} while (confirm == 'y' || confirm == 'Y');

	return 0;
}