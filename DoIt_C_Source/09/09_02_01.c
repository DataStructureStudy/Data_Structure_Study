#include <stdio.h>

void main()
{
    /* 합산 값을 저장할 sum과 합산에 사용할 숫자를 저장할 num을 선언한다. */
    int sum = 0, num = 1;
    /* 1에서 5까지 1씩 증가하면서 반복한다. */
    while (num <= 5) {
            /* 합산하기 전 sum값을 사용하여 “num + sum = “이라고 출력한다. */
            printf("num(%d) + sum(%d) = ", num, sum);
        /* sum에 num을 합산한다. */
        sum = sum + num;
        /* 합산 후 sum값을 출력하고 줄 바꿈을 한다. */
        printf("%d\n", sum);
        /* 다음 숫자를 더하기 위해서 숫자를 증가 시킨다. */
        num++;
    }
    /* 반복이 끝난 후, num 변수 값과 sum 변수 값을 줄 바꿈 후 출력한다. */
    printf("\nResult : num = %d  sum = %d\n", num, sum);
}