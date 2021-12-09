#include <stdio.h>

void main()
{
    /* data 배열은 1 ~ 5 까지의 값을 저장하고 있다 */
    char data[5] = { 1, 2, 3, 4, 5 };
    /* 합산에 사용할 result 변수는 0으로 초기화 한다. */
    int result = 0, i;

    /* 5번 반복하면서 배열의 각 요소 값을 result 변수에 합산 */
    for ( i = 0; i < 5; i++) {
        result = result + data[i];
    }
    /* 합산한 결과를 출력한다. */
    printf("data 배열의 각 요소의 합은 %d입니다\n", result);
}