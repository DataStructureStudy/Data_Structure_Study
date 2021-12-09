#include <stdio.h>

void main()
{
    int m, n;
    for (m = 5; m < 7; m++) {  /* m은 5 ~ 6 까지 2회 반복 */
        for (n = 0; n < 3; n++) {  /* n은 0 ~ 2 까지 3회 반복 */
            printf("m(%d) - n(%d)\n", m, n);
        }
    }
}