//while, do while, for�� ���� ����ؼ� �� �� �ֵ��� �� ��.


//#include <stdio.h>
//
//int main(void)
//{
//	int counter, i;
//
//	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
//	scanf_s("%d", &counter);
//
//	while (counter > 0)
//	{
//		printf("%d ", counter);
//		counter--;
//	}
//
//	printf("\a");
//
//	return 0;
//}

//#include <stdio.h>

//int main(void)
//{
//	int counter, i;
//
//	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
//	scanf_s("%d", &counter);
//
//	do 
//	{
//		printf("%d ", counter);
//		counter--;
//	} while (counter > 0);
//
//	printf("\a");
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int counter, i;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
	scanf_s("%d", &counter);

	for (int i = counter; i > 0; i--)
	{
		printf("%d ", i);
	}

	printf("\a");

	return 0;
}