#include <stdio.h>
#include <malloc.h>    /* malloc, free 함수를 사용하기 위해서 */

void GetMyData(int **q)  /* 포인터 변수 q는 p 변수의 주소를 저장함 */
{
	/* 할당된 주소를 포인터 q가 가리키는 main 함수의 p에 저장 */
	*q = (int *)malloc(40);
}

void main()
{
	int *p;          /* p는 초기화 되지 않아서 쓰레기(유효하지 않은) 값을 가짐 */
	GetMyData(&p);  /* 포인터 변수 p의 주소를 매개 변수로 전달 */
	*p = 5;          /* 할당된 메모리의 첫 4바이트에 5를 넣음 */
	free(p);          /* 할당된 동적 메모리를 해제 */
}
