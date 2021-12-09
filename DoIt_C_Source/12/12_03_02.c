#include <stdio.h>

void main()
{
    /* 1은 검은색 돌이 놓여져있는 것이고 2는 흰색 돌이 놓여져 있는 것이다.
       그리고 0은 돌이 놓여져 있지 않는 것이다. */
    char data[3][4] = { { 0, 0, 2, 0 }, { 1, 1, 0, 0 }, {2, 1, 0, 2 } };
    int x, y;

    for (y = 0; y < 3; y++) {
        for (x = 0; x < 4; x++) {
            printf("%d행 %d열에", y + 1, x + 1);
            if (data[y][x] == 1) printf(" 검은돌이 놓여있습니다.\n");
            else if (data[y][x] == 2) printf(" 흰돌이 놓여있습니다.\n");
            else printf("는 돌이 놓여있지 않습니다.\n");
        }
    }
}