#include<stdio.h>

int main()
{
	/*
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);
	
	if (num < 0)
	{
		printf("�Է� ��%d�� 0���� �۴�.\n", num);
	}
	if (num > 0)
	{
		printf("�Է� ��%d�� 0���� ũ��.\n", num);
	}
	if (num == 0)
	{
		printf("�Է� ��%d�� 0�̴�.\n", num);
	}

	int opt;
	double num1, num2;
	double result;

	printf("1. ����\t2.����\t3.����\t4.������\n");
	printf("���� : ");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է� : ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
	}
	if (opt == 2)
	{
		result = num1 - num2;
	}
	if (opt == 3)
	{
		result = num1 * num2;
	}
	if (opt == 4)
	{
		result = num1 / num2;
	}


	printf("��� : %f\n", result);

	int a, b;

	scanf("%d %d", &a, &b);
	
	if (a > b)
	{
		printf(">");

	}
	if (a < b)
	{
		printf("<");

	}
	if (a == b)
	{
		printf("=");

	}
	

	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	if (nInput <= 10)
	{
		nSelect = 10;
	}
	else
		nSelect = 20;

	printf("%d\n", nSelect);
	
	//
	int a;

	scanf("%d", &a);

	if (a % 7 == 0)
	{
		printf("multiple");
	}
	else
		printf("not multiple");

		

	int b;

	scanf("%d", &b);

	if (b % 2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	//

	int n;

	scanf("%d", &n);

	if (30 <= n && n <= 40 || 60 <= n && n <= 70)
	{
		printf("win");

	}
	else
		printf("lose");

	

	int score;
	printf("������ ������ �Է��ϼ��� : ");
	scanf("%d", &score);

	if (score >= 90)

		printf("��\n");
	else if (score >= 80)
		printf("��\n");
	else if (score >= 70)
		printf("��\n");
	else if (score >= 60)
		printf("��\n");
	else
		printf("��\n");
	
	int score;
	printf("������ ������ �Է��ϼ��� : ");
	scanf("%d", &score);
	
	if (score >= 90)
		printf("��\n");
	else
	{
		if (score >= 80)
			printf("��\n");
		else
		{
			if (score >= 70)
				printf("��\n");
			else
			{
				if (score >= 70)
					printf("��\n");
				else
				{
					if (score >= 60)
						printf("��\n");
					else
						printf("��\n");
				}
			}
		}
	} 
	
	//
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b || a > c)
	{
		if ()
		{
			printf("%d", b);
		}
		else
			printf("%d", c);

	}
	else
	{
		if (b > c || b > a)
		
			if (c > a)
			{
				printf("%d", c);
			}
		else
			printf("%d", a);
	}
	else
	{
		if (c > a || c > b)
		
			if (a > b)
			{
				printf("%d", a);
			}
		
		else
			printf("%d", b);
	 
	}
	*/
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if (a <= b && a <= c) {
	if (b < c)
		printf("%d", b);
	else printf("%d", c);

}
if (b <= a && b <= c) {
	if (a < c)
		printf("%d", a);
	else printf("%d", c);
}
if (c <= a && c <= b) {
	if (a < b)
		printf("%d", a);
	else printf("%d", b);
}


	return 0;
}