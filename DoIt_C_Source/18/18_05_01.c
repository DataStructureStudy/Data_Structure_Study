#include <stdio.h>
#include <malloc.h>    /* malloc, free 함수를 사용하기 위해서 */
/* 소스코드를 단순화하기 위해서 최대한 예외 처리는 생략하겠습니다 */
typedef struct node  /* 이 그룹을 연결 리스트에서는 “노드(node)”라고 함 */
{
	int number;            /* 정수 값을 저장할 변수 */
	struct node *p_next;    /* 다음 노드를 가리킬 포인터 */
} NODE;

/* 노드가 없는 경우 이 함수로 전달된 p_head, p_tail 값을 수정해야 하기 때문에
AddNumber를 호출할 때 p_head, p_tail 포인터 변수의 주소 값을 넘겨줌. 따라서
1차원 포인터의 주소를 받아서 사용해야 하기 때문에 2차원 포인터를 사용 함 */
void AddNumber(NODE **pp_head, NODE **pp_tail, int data)
{
	/* *pp_head 라고 사용하면 AddNumber를 호출할 때 사용한 p_head 포인터에
	저장된 주소를 의미 함. 이 값이 NULL이면 노드가 없다는 뜻임 */
	if (NULL != *pp_head) {
		/* *pp_tail 라고 사용하면 AddNumber를 호출할 때 사용한 p_tail 포인터에
		저장된 주소를 의미 함. 이 주소는 마지막 노드의 주소임 */
		(*pp_tail)->p_next = (NODE *)malloc(sizeof(NODE)); /* 새 노드 할당 */
		*pp_tail = (*pp_tail)->p_next;  /* p_tail(*pp_tail)에 새 노드 주소를 저장 */
	}
	else {
		/* p_head가 NULL이라서 첫 노드가 추가 됨. p_head 값에 직접 대입 */
		*pp_head = (NODE *)malloc(sizeof(NODE)); /* 새 노드 할당 */
		*pp_tail = *pp_head;  /* 새 노드의 주소를 p_tail(*pp_tail)에 저장 */
	}

	(*pp_tail)->number = data;     /* 새 노드의 number에 data 값을 저장 */
	(*pp_tail)->p_next = NULL;     /* 다음 노드가 없음을 명시 */
}

void main()
{
	/* 노드의 시작과 끝을 기억할 포인터 */
	NODE *p_head = NULL, *p_tail = NULL, *p;
	int sum = 0, temp;

	while (1) {  /* 무한루프 : 중간에 9999를 누르면 종료 함 */
		printf("숫자를 입력하세요 (9999를 누르면 종료) : ");
		scanf("%d", &temp);
		if (9999 == temp) break;  /* 9999를 눌렀으면 입력 중단 */
								  /* 노드의 시작과 끝을 기억하는 포인터의 주소와 입력된 숫자를 전달 */
		AddNumber(&p_head, &p_tail, temp);
	}

	/* 입력된 숫자를 출력하기 위해서 노드를 탐색할 포인터에 시작 노드의 주소를
	대입 p_head를 직접 사용하면 시작 노드의 위치를 잃어버림 */
	p = p_head;
	while (NULL != p) {
		if (p != p_head) printf(" + ");   /* 숫자와 숫자 사이에 + 를 출력 함 */
		printf(" %d ", p->number);    /* 입력한 숫자 출력 */
		sum = sum + p->number;    /* 입력한 숫자들을 합산함 */
		p = p->p_next;               /* 다음 노드로 이동 */
	}
	printf(" = %d\n", sum);    /* 합산 값을 출력 함 */

							   /* 사용했던 모든 노드를 삭제. p_head를 NULL로 만들 것이기 때문에
							   탐색에 p_head를 그대로 이용 함 */
	while (NULL != p_head) {   /* p_head가 NULL이 될 때까지 반복 */
		p = p_head;   /* 현재 노드를 삭제하기 위해 p 변수에 노드 주소 저장 */
		p_head = p_head->p_next;  /* 시작 위치를 다음 노드로 옮김 */
		free(p);                    /* 기억했던 주소를 사용하여 노드 삭제 */
	}
	p_tail = p_head; /* 반복문을 나오면 p_head는 NULL임. p_tail도 NULL로 변경 */
}
