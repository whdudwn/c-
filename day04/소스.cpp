#include<stdio.h>;


int main() {
//1000������ ������ �Է��ϸ� �� �ʷ� ����ϴ� ���α׷�//
	int num;
	printf("���� �Է�");
	scanf_s("%d", &num);
	int min;


	int num;
	printf("10000~99999 ���� �Է�");
	scanf_s("%d", &num);

	int over_hundred = num / 100;
	//123
	int hundred = over_hundred % 10;
	printf("���� �ڸ��� %d", hundred);



		return	0;
} 

