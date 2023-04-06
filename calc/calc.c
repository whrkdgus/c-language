#include<stdio.h>
float add() {
	float sum =0, num1=0, num2=0;
	printf("첫번째 숫자 입력 : "); scanf("%f", &num1);
	printf("두번째 숫자 입력 : "); scanf("%f", &num2);
	sum = num1 + num2;
	
	return sum ;
}

float sub() {
	float resilt =0, num1=0, num2=0;
	printf("첫번째 숫자 입력 : "); scanf("%f", &num1);
	printf("두번째 숫자 입력 : "); scanf("%f", &num2);
	resilt = num1 - num2;
	
	return resilt;

	
}

float mul() {
	float resilt =0, num1=0, num2=0;
	printf("첫번째 숫자 입력 : "); scanf("%f", &num1);
	printf("두번째 숫자 입력 : "); scanf("%f", &num2);
	resilt = num1 * num2;
	
	return resilt;
}

float div() {
	float resilt =0, num1=0, num2=0;
	printf("첫번째 숫자 입력 : "); scanf("%f", &num1);
	printf("두번째 숫자 입력 : "); scanf("%f", &num2);
	resilt = num1 / num2;
	
	return resilt;
}
int main() {
	
	printf("덧쎔결과 : %f\n", add());
	printf("뼬쎔결과 : %f\n", sub());
	printf("곱쎔결과 : %f\n", mul());
	printf("나눗쎔결과 : %f\n", div());
}