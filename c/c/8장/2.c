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
	
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &c);

	if (check_alpha(c))
		printf("%c�� ���ĺ� �����Դϴ�. \n", c);
	
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�. \n, c");

	return 0;
}