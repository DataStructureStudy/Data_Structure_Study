#include <stdio.h>
#include <stdlib.h>     /* atoi 함수를 사용하기 위해 */

void main()
{
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number : ");
    gets(first_string); /* 첫 번째 숫자를 입력받음 */
    printf("input second number : ");
    gets(second_sting);   /* 두 번째 숫자를 입력받음 */

    first_num = atoi(first_string);  /* 문자열 -> 정수 */
    second_num = atoi(second_string);  /* 문자열 -> 정수 */
    /* 정수로 변환된 두 수를 합산한 결과 출력 */
    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}