#include <stdio.h>

/* step에 전달된 숫자에 해당하는 단을 출력하는 함수 */
void ShowMultiplication(int step)
{
    int i;
    /* i변수가 1 ~ 9까지 1씩 증가하면서 총 9번 반복합니다 */
    for (i = 1; i <= 9; i++) {
        /* step * i = step*i 형식으로 출력합니다 */
        printf("%d * %d = %d\n", step, i, step * i);
    }
}

void main()
{
    /* 매개변수에 5를 전달하여 5단을 출력한다 */
    ShowMultiplication(5);
}