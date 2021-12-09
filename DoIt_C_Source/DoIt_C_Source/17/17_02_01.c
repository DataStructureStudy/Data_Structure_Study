#include <stdio.h>

void main()
{
    short data = 3;
    short *p = &data; /* data 변수의 주소를 1차원 포인터 p에 저장 */
    short **pp = &p;  /* 1차원 포인터 p변수의 주소를 2차원 포인터 pp에 저장 */

    printf("[Before  ] data : %d\n", data); /* 3 출력 */
    *p = 4;     /* 1차원 포인터 p를 사용하여 data 변수값을 4로 수정 */
    printf("[Use *p  ] data : %d\n", data);
    **pp = 5;   /* 2차원 포인터 pp를 사용하여 data 변수값을 5로 수정 */
    printf("[Use **pp] data : %d\n", data);
}