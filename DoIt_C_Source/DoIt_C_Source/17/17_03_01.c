#include <stdio.h>
#include <malloc.h>    /* malloc, free 함수를 사용하기 위해서 */

void GetMyData(int *q)
{
	q = (int *)malloc(40);  /* 40바이트의 메모리를 할당하여 포인터 q에 저장 */
}

void main()
{
	int *p;     /* p는 초기화 되지 않아서 쓰레기(유효하지 않은) 값을 가짐 */
	GetMyData(p); /* 함수를 호출하여 p에 40바이트의 메모리 할당 */
	*p = 5;       /* 할당된 메모리의 첫 4바이트에 5를 넣음, 오류 발생! */
	free(p);       /* 할당된 동적 메모리를 해제 */
}
