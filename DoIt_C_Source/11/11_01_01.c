#include <stdio.h>

int Sum(int data1, int data2) /* data1, data2는 지역변수지역 변수임. 5와 3으로 초기화 됨 */
{
    int  result = data1 + data2;  /* 지역 변수, data + data2 값으로 초기화됨 */
    return result;
}

void main()
{
    int  result;     /* 지역 변수, 초기화 되지 않아서 어떤 값이 들어있을지 모름 */
    result = Sum(5, 3);
    printf("5 + 3 = %d\n", result);
}