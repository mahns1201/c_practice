#include <stdio.h>

#define PI 3.141592
#define VOLUME(r, h) PI*(r)*(r)*(h)  //�Ķ���Ϳ� ��ȣ�� ������ �Ѵ�.

int main(void)
{
	double r, h, volume;

	printf("������� �������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &r);

	printf("������� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf", &h);

	volume = VOLUME(r+10, h+10);
	
	printf("������� ����: %f \n", volume);
	printf("���� ���: %f\n", PI * (r + 10) * (r + 10) * (h + 10));

	return 0;
}