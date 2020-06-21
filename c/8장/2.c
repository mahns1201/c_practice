#include <stdio.h>

check_alpha(char ch)
{
	int is_alpha;

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		is_alpha = 1;
	else
		is_alpha = 0;

	return is_alpha;
}

int main(void)
{
	char c;
	
	printf("문자를 입력하시오: ");
	scanf_s("%c", &c);

	if (check_alpha(c))
		printf("%c는 알파벳 문자입니다. \n", c);
	
	else
		printf("%c는 알파벳 문자가 아닙니다. \n, c");

	return 0;
}