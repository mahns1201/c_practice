#include <stdio.h>

int check()
{
	int call_count = 0;
	
	call_count++;

	if (call_count > 3)
	{
		printf("로그인 시도 횟수 초과\n");

		return;
	}

	int n;

	printf("비밀번호: ");
	scanf_s("%d", &n);

	if (n == 1234)
	{
		printf("로그인 성공!!\n");
		
		return;
	}
	return;
}

int main(void)
{
	while (1)
	{
		if (check() == 1)
			break;
	}
	return 0;
}