#include <stdio.h>
#include <malloc.h>

void main()
{
    short **pp;
    pp = (short **)malloc(sizeof(short *)); /* 4바이트를 할당. 두 번째 사각형 생성 */
    *pp = (short *)malloc(sizeof(short));  /* 2바이트를 할당. 세 번째 사각형 생성 */

    **pp = 10;   /* 2차원 포인터를 사용하여 세 번째 사각형에 10 대입 */
    printf("**pp : %d\n", **pp); /* 10 출력 */
    /* [해제 순서 중요] 두 번째 사각형이 세 번째 사각형의 주소를 가지고 있기
       때문에 두 번째 사각형을 먼저 해제하면 세 번째 사각형의 주소를 잃어 버림.
       따라서 세번째 사각형에 해당하는 메모리를 해제하지 못함 */
    free(*pp); /* 세 번째 사각형에 해당 하는 메모리 해제 */
    free(pp);  /* 두 번째사각형에 해당 하는 메모리 해제 */
}