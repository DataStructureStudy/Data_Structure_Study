#include <stdio.h>

void main()
{
    int score = 92; /* 명령문1-1 */
    char grade; /* 명령문1-2 */
                /* score >= 90 비교연산은 참이기 때문에 { } 에 포함된
                명령문들은 모두 수행합니다. */
    if (score >= 90) {
        grade = 'A'; /* 명령문2 */
        printf("점수는 %d이고 등급은 %c 입니다. \n", score, grade); ; /* 명령문3 */
    }
    printf("작업 종료 \n");  /* 명령문4 */
}