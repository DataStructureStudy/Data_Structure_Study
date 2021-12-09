#include <stdio.h>
#include <string.h>  /* 문자열 길이를 구하는 strlen 함수를 사용하기 위해서 */

void main()
{
    int pos_num = 1, num = 0, i, count;
    char num_string[4] = "123";
    /* 문자열의 길이를 구해서 count 변수에 3이 저장 */
    count = strlen(num_string);
    /* 문자열의 길이보다 1만큼 작게 반복 하기 위해 */
    /* 10*10*10 = 1000 이 아니라 10*10 해서 100 이 되어야함
    반복 1회마다 10씩 증가 1→10→100 */
    for (i = 0; i < count - 1; i++) pos_num = pos_num * 10;
    /* 문자열의 길이 만큼 반복 */
    for (i = 0; i < count; i++) {
        num = num + (num_string[i] - '0') * pos_num;
        pos_num = pos_num / 10;
    }
    printf(" %s -> %d\n", num_string, num);
}