#include <stdio.h>

int Sum(int a, int b) /* 덧셈 */
{
    return a + b;
}   

int Sub(int a, int b) /* 뺄셈 */
{
    return a - b;
}   

int Mul(int a, int b) /* 곱셈 */
{
    return a * b;
}   

int Div(int a, int b) /* 나눗셈 */
{
    return a / b;
}

void main()
{
    /* 함수 포인터를 배열로 선언하고 함수의 원형이 int func(int, int); 로 
       동일한 네 가지 함수의 주소를 저장함 */       
    int(*p[4])(int, int) = { &Sum, &Sub, &Mul, &Div }, i;
    char op_table[4] = { '+', '-', '*', '/' };
    /* Sum, Sub, Mul, Div 순으로 호출 */
    for (i = 0; i < 4; i++) printf("%d %c %d = %d\n", 8, op_table[i], 2, (*p[i])(8, 2));
}