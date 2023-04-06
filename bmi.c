#include <stdio.h>
int main()
{
	float height = 178;
	float weight = 74;
	float bmi = 0;
	height = height * 0.01;
	bmi = weight / (height * height);
	printf("당신의 bmi : %.2f\n", bmi);
	return 0;
}