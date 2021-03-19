#include <stdio.h> 

#pragma warning(disable:4996) 
int main() 
{
    /*
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    //
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);

    }
   

    //
    
    int a, b, n;

    scanf("%d %d", a, b);

    for(int i = 0; i < n; i++)
        printf("")
        

    char c0perator = 0;

    int x = 0, y = 0, nResult = 0;

    scanf("%d %c %d", &x, &c0perator, &y);

    switch (c0perator)
    {
    case '+':
        nResult = x + y;
        break;
    case '-':
        nResult = x - y;
        break;
    case '*':
        nResult = x * y;
        break;
    case '/':
        nResult = x / y;
        break;
    default:
        printf("ERROR: 알수 없는 산술 연산입니다.");
         printf("Result: %d\n", nResult);
    }
 

    //
        char ch;
        printf("영어 소문자를 입력하세요 : ");
        scanf("%c", &ch);

        switch(ch)
        {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
        printf("모음\n");
        break;
    default:
        printf("자음\n");
        }
        
        //
    int n, m, k;

    scanf("%d %d %d", &n, &m, &k);

    if (n <= 170 || m <= 170 || k <= 170)
    {
        printf("CRASH");
    }
    else
    {
        printf("PASS");
    }
   
   //
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c)
    {
        if (b < c)
            printf("%d %d %d", a, b, c);
        else
            printf("%d %d %d", a, c, b);
    }
    if (b < c && b < a)
    {
        if (c < a)
            printf("%d %d %d", b, c, a);
        else
            printf("%d %d %d", b, a, c);
    }
    if (c < a && c < b)
    {
        if (a < b)
            printf("%d %d %d", c, a, b);
        else
            printf("%d %d %d", c, b, a);
    }
    */
    
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0)
    {
        a = 24;
        if (b < 30) 
        {
            a -= 1;
            b += 60;
            b -= 30;
        }
        else 
        {
            b -= 30;
        }
    }
    else {
        if (b < 30)
        {
            a -= 1;
            b += 60;
            b -= 30;
        }
        else
        {
            b -= 30;
        }
    }
    printf("%d %d", a, b);
    



    return 0;
}



