#include<stdio.h>;


int main() {
//1000이하의 정수를 입력하면 분 초로 출력하는 프로그램//
	int num;
	printf("정수 입력");
	scanf_s("%d", &num);
	int min;


	int num;
	printf("10000~99999 정수 입력");
	scanf_s("%d", &num);

	int over_hundred = num / 100;
	//123
	int hundred = over_hundred % 10;
	printf("백의 자리는 %d", hundred);



		return	0;
} 

