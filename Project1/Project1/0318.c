#include<stdio.h>

int main()
{
	/*
	int num1, num2;

	scanf("%d %d", &num1, &num2);


	if (num1 > num2)
	{
		printf("%d", num1 - num2);
	}
	else
		printf("%d", num2 - num1);
		
		//
	int a;

	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("Â¦¼ö");
	}
	else
		printf("È¦¼ö");

		*/

	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b > c)
	{
		printf("%d", a);
	}
	if(b > a > c)
	{
		printf("%d", c);
	}
	if(c > b > a)
	{
		printf("%d", c);
	}


	return 0;
}
