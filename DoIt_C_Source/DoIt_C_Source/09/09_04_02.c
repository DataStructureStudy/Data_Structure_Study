#include <stdio.h>

void main()
{
    int step, i;
    /* 2단에서 9단까지 출력되도록 반복합니다. */
    for (step = 2; step <= 9; step++) {
        /* i변수가 1 ~ 9까지 1씩 증가하면서 총 9번 반복합니다 */
        for (i = 1; i <= 9; i++) {
            /* step * i = step*i 형식으로 출력합니다 */
            printf("%d * %d = %d\n", step, i, step*i);
        }
    }
}