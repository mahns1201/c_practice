#include <stdio.h>
#include <time.h>

int main(void)
{
	int comp;
	srand((int)time(NULL));			// 씨앗
	comp = rand() % 3 + 1;
	//printf("컴퓨터의 선택 = %d\n", comp);

	int user;
	printf("선택하시오(1: 가위 2: 바위 3: 보)\n");
	scanf_s("%d", &user);

	if (comp == 1 && user == 1)
		printf("컴퓨터: 가위, 사용자: 가위 --> 비김.\n");
	else if (comp == 1 && user == 2)
		printf("컴퓨터: 가위, 사용자: 바위 --> 사용자 승\n");
	else if (comp == 1 && user == 3)
		printf("컴퓨터: 가위, 사용자: 보 --> 컴퓨터 승\n");

	else if (comp == 2 && user == 1)
		printf("컴퓨터: 바위, 사용자: 가위 --> 컴퓨터 승\n");
	else if (comp == 2 && user == 2)
		printf("컴퓨터: 바위, 사용자: 바위 --> 비김\n");
	else if (comp == 2 && user == 3)
		printf("컴퓨터: 바위, 사용자: 보 --> 사용자 승\n");

	else if (comp == 3 && user == 1)
		printf("컴퓨터: 보, 사용자: 가위 --> 사용자 승\n");
	else if (comp == 3 && user == 2)
		printf("컴퓨터: 보, 사용자: 바위 --> 컴퓨터 승\n");
	else if (comp == 3 && user == 3)
		printf("컴퓨터: 보, 사용자: 보 --> 비김");


	return 0;
}