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
	printf("정수 x1, y1을 입력하세요 :");
	scanf("%d %d", &a, &b);
	printf("정수 x2 ,y,2을 입력하세요 :");
	scanf("%d %d ", &c, &d);
	a = c - a, b = d - b;
	printf("사각형의 넓이는 %d 입니다.", a * b);
	//
	char a;
	printf("알파벳 입력 (예시: p) : ");
	scanf("%c", &a);
	printf("%c에 해당하는 아스키 코드 값은 %d입니다.", a, a);
	//
	char a;
	printf("알파벳 입력 (예시: p) : ");
	scanf("%d", &a);
	printf("%d에 해당하는 아스키 코드 값은 %d입니다.", a, a);
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
	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);
	if (nAge >= 20)
	{
		printf("당신의 나이는 %d세 입니다.\n", nAge);
	}
	printf("프로그램 끝!!!\n");
	*/



	int nAge = 0;
	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);
	if (nAge >= 20)
	{
		printf("처리전, 당신의 나이는 %d세 입니다.\n", nAge);
		nAge = 20;

	}
	printf("당신의 나이는 %d세 입니다.\n", nAge);

	return 0;
}