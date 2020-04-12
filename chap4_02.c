#include <stdio.h>

int main()
{
	double wide, length, height;
	double volume;

	printf("상자의 가로 세로 높이를 한 번에 입력해주세여:\n");
	
	scanf_s("%lf %lf %lf", &wide, &length, &height);

	volume = wide * length * height;

	printf("상자의 부피는 %lf입니다.", volume);
	getch(); //키보드 입력을 기다렸다가 꺼진다.

	return 0;
}