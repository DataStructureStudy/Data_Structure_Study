#include <stdio.h>
void main()
{
    /* data 배열은 1 ~ 5 까지의 값을 저장하고 있다 */
    char data[5] = { 1, 2, 3, 4, 5 };
    /* 합산에 사용할 result 변수는 0으로 초기화 한다. */
    int result = 0, i;
    char *p = data;  /* data 배열의 시작 위치를 포인터 변수 p에 저장한다 */

                     /* 5번 반복하면서 포인터 p를 사용하여 배열의 각 항목을 result 변수에 합산 */
    for (i = 0; i < 5; i++) {
        result = result + *p;  /* 포인터 p가 가리키는 대상의 값을 result에 합산 */
        p++; /* data 배열의 다음 항목으로 주소를 이동. data[0] -> data[1] -> ... */
    }
    /* 합산한 결과를 출력한다. */
    printf("data 배열의 각 요소의 합은 %d입니다\n", result);
}