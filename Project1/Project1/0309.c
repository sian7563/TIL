#include <stdio.h>

int main()
{
	/*
	int num1 = 10;

	int num2 = 12;

	int result1, result2, result3, result4, result5, result6;

	result1 = (num1 == 10);
	result2 = (num1 <= 9);
	result3 = (12 >= num2);
	result4 = (num1 != num2);
	result5 = (num1 > num2);
	result6 = (12 < num2);

	printf("result1: %d\n result2: %d\n result3: %d\n"\
		"result4: %d\n result5: %d\n result6: %d\n", result1, result2, result3, result4, result5, result6);
	*/

	/*
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3, result4;

	result1 = (num1 == 10 && num1 <= 9);
	result2 = (12 >= num2 || num1 != num2);
	result3 = !(num1 > num2);
	result4 = !num2;

	printf(" result1: %d\n result2: %d\n result3: %d\n result4: %d\n",
		result1, result2, result3, result4);

	//
	int num1 = 1, num2 = 2;
	printf("학번 : 1234,"), printf(" 이름 : 홍길동!\n");
	num1++, num2++;
	printf("%d ", num1), printf("%d ", num2), printf("\n");

	//
	int num;
	scanf("%d", &num);
	printf("%d", num);
	
	//
	int n, m;

	printf("정수 one : ");

	scanf("%d", &n);
	printf("%d\n", n);

	printf("정수 two : ");

	scanf("%d\n", &m);
	printf("%d\n", m);

	printf("%d + %d = %d\n", n, m, n + m);


	int a, b, c;
	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);
	
	//
	int n, m;

	scanf("%d %d", &n, &m);
	printf("%d * %d = %d\n", n, m, n * m);
	printf("%d / %d = %d", n, m , n / m);
	
	\\
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d * %d + %d = %d", a, b, c, a * b + c);
	\\
	int k;
	scanf("%d", &k);
	printf("%d * %d = %d", k, k, k * k);
	*/

	int t, u;
	scanf("%d %d", &t, &u);
	printf("%d / %d 몫 : %d", t, u, t / u);
	printf("%d %% %d 나머지 : %d", t, u, t % u);




	return 0;
}