#include <stdio.h> 
#define MAX_COUNT    5     /* 최대 사용횟수를 5회로 제한 */
/* 소스코드를 단순화하기 위해서 최대한 예외 처리는 생략하겠습니다 */
void main()
{
    int num[MAX_COUNT], count = 0, sum = 0, i;
    /* 사용자가 최대 5회까지 입력을 받음, 중간에 9999를 누르면 종료 함 */
    while (count < MAX_COUNT) {
        printf("숫자를 입력하세요 (9999를 누르면 종료) : ");
        scanf("%d", num + count);  /* scanf("%d", &num[count]); 과 동일한 표현 */
        if (num[count] == 9999) break;  /* 9999를 눌렀으면 입력 중단 */
        count++;  /* 입력된 횟수 계산 */
    }
    /* 입력된 횟수만큼 숫자를 출력 해줌 */
    for (i = 0; i < count; i++) {
        if (i > 0) printf(" + ");   /* 숫자와 숫자 사이에 + 를 출력 함 */
        printf(" %d ", num[i]);  /* 입력한 숫자 출력 */
        sum = sum + num[i];  /* 입력한 숫자들을 합산함 */
    }
    printf(" =  %d\n", sum);    /* 합산 값을 출력 함 */
}