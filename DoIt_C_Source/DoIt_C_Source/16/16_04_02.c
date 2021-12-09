#include <stdio.h>
#include <malloc.h>    /* malloc, free 함수를 사용하기 위해서 */
/* 소스코드를 단순화하기 위해서 최대한 예외 처리는 생략하겠습니다 */
void main()
{
    int *p_num_list, count = 0, sum = 0, limit = 0, i;

    printf("사용할 최대 개수를 입력하세요 : ");
    scanf("%d", &limit);
    /* 사용자가 입력한 개수만큼 정수를 저장할 수 있는 메모리를 할당 */
    p_num_list = (int *)malloc(sizeof(int)*limit);
    /* 사용자가 최대 5회까지 입력을 받음, 중간에 9999를 누르면 종료 함 */
    while (count < limit) {
        printf("숫자를 입력하세요 (9999를 누르면 종료) : ");
        scanf("%d", p_num_list + count);
        if (*(p_num_list + count) == 9999) break;  /* 9999를 눌렀으면 입력 중단 */
        count++;  /* 입력된 횟수 계산 */
    }
    /* 입력된 횟수만큼 숫자를 출력 해줌 */
    for (i = 0; i < count; i++) {
        if (i > 0) printf(" + ");   /* 숫자와 숫자 사이에 + 를 출력 함 */
        printf(" %d ", *(p_num_list + i));  /* 입력한 숫자 출력 */
        sum = sum + *(p_num_list + i);  /* 입력한 숫자들을 합산함 */
    }
    printf(" = %d\n", sum);    /* 합산 값을 출력 함 */
    free(p_num_list);          /* 사용했던 메모리를 제거 */
}