#include<stdio.h>

int main()
{
	/*
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	printf("%c %d\n", ch3, ch3);
	printf("%c %d\n", ch4, ch4);

	
	//
	int a, b, c, d;
	printf("���� x1, y1�� �Է��ϼ��� :");
	scanf("%d %d", &a, &b);
	printf("���� x2 ,y,2�� �Է��ϼ��� :");
	scanf("%d %d ", &c, &d);
	a = c - a, b = d - b;
	printf("�簢���� ���̴� %d �Դϴ�.", a * b);
	//
	char a;
	printf("���ĺ� �Է� (����: p) : ");
	scanf("%c", &a);
	printf("%c�� �ش��ϴ� �ƽ�Ű �ڵ� ���� %d�Դϴ�.", a, a);
	//
	char a;
	printf("���ĺ� �Է� (����: p) : ");
	scanf("%d", &a);
	printf("%d�� �ش��ϴ� �ƽ�Ű �ڵ� ���� %d�Դϴ�.", a, a);
	//
	int x = 5;

	printf("%d\n", 5 / 2);
	printf("%f\n", 5.0 / 2);
	printf("%f\n", 5 / 2.0);
	printf("%f\n", (double)5 / 2);
	printf("%f\n", (double)x / 2);
	printf("%f\n", x / (double)2);
	printf("%f\n", (double)(x / 2));

	printf("%d\n", 1234);
	printf("%d, %d\n", 1234, -5678);
	printf("%+d, %+d\n", 1234, -5678);
	printf("%8d\n", 1234);
	printf("%08d\n", 1234);
	printf("%-08d\n", 1234);
	
	//
	double dData = 123.4567890;

	printf("%f, %f\n", dData, -dData);

	printf("%.1f\n", dData);
	printf("%.2f\n", dData);
	printf("%.3f\n", dData);
	printf("%6d\n", 123);

	printf("%12.5f\n", dData);
	printf("%012.5f\n", dData);
	//
	int nAge = 0;
	printf("���̸� �Է��ϼ���. : ");
	scanf("%d", &nAge);
	if (nAge >= 20)
	{
		printf("����� ���̴� %d�� �Դϴ�.\n", nAge);
	}
	printf("���α׷� ��!!!\n");
	*/



	int nAge = 0;
	printf("���̸� �Է��ϼ���. : ");
	scanf("%d", &nAge);
	if (nAge >= 20)
	{
		printf("ó����, ����� ���̴� %d�� �Դϴ�.\n", nAge);
		nAge = 20;

	}
	printf("����� ���̴� %d�� �Դϴ�.\n", nAge);

	return 0;
}