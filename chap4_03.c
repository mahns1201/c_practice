#include <stdio.h>

int main(void)
{
	int code;

	printf("아스키 코드값을 입력하시오: \n");
	scanf_s("%d", &code);

	printf("문자: %c입니다.", (char)code);		//(char)로 형변환을 시켜야한다!
	
	return 0;
}