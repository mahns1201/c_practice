#include <stdio.h>
#include <time.h>

int main(void)
{
	int comp;
	srand((int)time(NULL));			// ����
	comp = rand() % 3 + 1;
	//printf("��ǻ���� ���� = %d\n", comp);

	int user;
	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��)\n");
	scanf_s("%d", &user);

	if (comp == 1 && user == 1)
		printf("��ǻ��: ����, �����: ���� --> ���.\n");
	else if (comp == 1 && user == 2)
		printf("��ǻ��: ����, �����: ���� --> ����� ��\n");
	else if (comp == 1 && user == 3)
		printf("��ǻ��: ����, �����: �� --> ��ǻ�� ��\n");

	else if (comp == 2 && user == 1)
		printf("��ǻ��: ����, �����: ���� --> ��ǻ�� ��\n");
	else if (comp == 2 && user == 2)
		printf("��ǻ��: ����, �����: ���� --> ���\n");
	else if (comp == 2 && user == 3)
		printf("��ǻ��: ����, �����: �� --> ����� ��\n");

	else if (comp == 3 && user == 1)
		printf("��ǻ��: ��, �����: ���� --> ����� ��\n");
	else if (comp == 3 && user == 2)
		printf("��ǻ��: ��, �����: ���� --> ��ǻ�� ��\n");
	else if (comp == 3 && user == 3)
		printf("��ǻ��: ��, �����: �� --> ���");


	return 0;
}