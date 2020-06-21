#include <stdio.h>

#define PI 3.141592
#define VOLUME(r, h) PI*(r)*(r)*(h)  //파라미터에 괄호를 씌워야 한다.

int main(void)
{
	double r, h, volume;

	printf("원기둥의 반지름을 입력하시오: ");
	scanf_s("%lf", &r);

	printf("원기둥의 높이를 입력하시오: ");
	scanf_s("%lf", &h);

	volume = VOLUME(r+10, h+10);
	
	printf("원기둥의 부피: %f \n", volume);
	printf("직접 계산: %f\n", PI * (r + 10) * (r + 10) * (h + 10));

	return 0;
}