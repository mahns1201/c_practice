//while, do while, for문 전부 사용해서 할 수 있도록 할 것.


//#include <stdio.h>
//
//int main(void)
//{
//	int counter, i;
//
//	printf("카운터의 초기값을 입력하시오: ");
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
//	printf("카운터의 초기값을 입력하시오: ");
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

	printf("카운터의 초기값을 입력하시오: ");
	scanf_s("%d", &counter);

	for (int i = counter; i > 0; i--)
	{
		printf("%d ", i);
	}

	printf("\a");

	return 0;
}