#include <stdio.h>

int main()
{
	/*
	printf("%d+%d=%d", 3, 4, 3 + 4);

	int num;
	num = 20; 
	printf("%d", num);

	int num1;      //num1�̶�� �̸��� ��������
	num1 = 12;     //���� num1�� 12�� �ʱ�ȭ
	num1 = 24;     //����num1�� 24�� ����

	//
	int num2, num3;
	int num4 = 30, num5 = 40;
	

	int num1 = 0 ,num2 = 0;
		
	int num3 = 30, num4 = 40;

	printf("num1: %d, num2: %d\n", num1, num2);

	num1 = 10;
	num2 = 20;

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);
	

	//
	int num1 = 3;
	int num2 = 4;

	printf("num1: %d, num2: %d\n", num1, num2);
	printf("���� ��� : %d\n", num1 + num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);

	printf("%d��(��) %d�� ���� %d�Դϴ�.\n", num1, num2, num1 + num2);
	
	//
	int num1 = 9, num2 = 2;

	printf("%d + %d = %d\n", num1, num2, num1 + num2);

	printf("%d - %d = %d\n", num1, num2, num1 - num2);

	printf("%d * %d = %d\n", num1, num2, num1 * num2);

	printf("%d / %d�� �� = %d\n", num1, num2, num1 / num2);

	printf("%d / %d�� ������ = %d\n", num1, num2, num1 % num2);
	
	//
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3; 
	num2 *= 4;
	num3 %= 5;

	printf("Result : %d, %d, %d\n", num1, num2, num3);


	//
	int num1 = +2;
	int num2 = -4;

	num1 = -num1;
	printf("num1 : %d\n", num1);
	num2 = -num2;
	printf("num2 : %d\n", num2);
*/

	int num1 = 10;
	int num2 = 10;

	num2 = ++num1;
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);

	num1 = 10;
	num2 = 10;
	num2 = num1++;
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);

	num1 = 10;
	num2 = 10;
	num2 = --num1;
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);

	num1 = 10;
	num2 = 10;
	num2 = num1--;
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);
	
	












	
		return 0;
}