#include <stdio.h>
void main()
{
    int num = 0, count = 0;
    char num_string[4] = "123";
    /* 문자열이 끝날 때까지 반복 */
    while (num_string[count] != 0) {
        /* 반복할 때마다 이전 값에 10을 곱해서 자릿수를 증가시킴
           num 값의 변화 :  1 → 0*10+1 → 1*10+2 → 12*10+3 → 123  */
        num = num * 10 + (num_string[count] - '0');
        count++;   /* 다음 문자로 이동 */
    }
    printf(" %s -> %d\n", num_string, num);
}