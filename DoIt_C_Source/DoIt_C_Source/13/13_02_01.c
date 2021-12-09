#include <stdio.h>

void main()
{
    short birthday;
    short *ptr;
    ptr = &birthday;   /* birthday 변수의 주소를 ptr 변수에 대입 */

    /* %p 형식은 메모리의 주소를 16진수 형식으로 출력합니다. */
    printf("birthday 변수의 주소는 %p  입니다.\n", ptr);
}