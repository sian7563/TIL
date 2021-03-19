#include<stdio.h>

int main()
{
	/*
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);
	
	if (num < 0)
	{
		printf("입력 값%d은 0보다 작다.\n", num);
	}
	if (num > 0)
	{
		printf("입력 값%d은 0보다 크다.\n", num);
	}
	if (num == 0)
	{
		printf("입력 값%d은 0이다.\n", num);
	}

	int opt;
	double num1, num2;
	double result;

	printf("1. 덧셈\t2.뺄셈\t3.곱셈\t4.나눗셈\n");
	printf("선택 : ");
	scanf("%d", &opt);
	printf("두 개의 실수 입력 : ");
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


	printf("결과 : %f\n", result);

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
	printf("과목의 점수를 입력하세요 : ");
	scanf("%d", &score);

	if (score >= 90)

		printf("수\n");
	else if (score >= 80)
		printf("우\n");
	else if (score >= 70)
		printf("미\n");
	else if (score >= 60)
		printf("양\n");
	else
		printf("가\n");
	
	int score;
	printf("과목의 점수를 입력하세요 : ");
	scanf("%d", &score);
	
	if (score >= 90)
		printf("수\n");
	else
	{
		if (score >= 80)
			printf("우\n");
		else
		{
			if (score >= 70)
				printf("미\n");
			else
			{
				if (score >= 70)
					printf("미\n");
				else
				{
					if (score >= 60)
						printf("양\n");
					else
						printf("가\n");
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