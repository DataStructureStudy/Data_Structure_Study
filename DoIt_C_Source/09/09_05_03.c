#include <stdio.h>

void main()
{
    int m;
    for (m = 5; m < 8; m++) {  /* m은 5 ~ 7 까지 3회 반복 */
        if (m == 6) continue;    /* m이 6일 때 continue를 수행한다 */
        printf("m(%d)\n", m);
    }
}