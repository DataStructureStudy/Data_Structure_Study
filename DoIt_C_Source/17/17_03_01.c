#include <stdio.h>
#include <malloc.h>    /* malloc, free �Լ��� ����ϱ� ���ؼ� */

void GetMyData(int *q)
{
	q = (int *)malloc(40);  /* 40����Ʈ�� �޸𸮸� �Ҵ��Ͽ� ������ q�� ���� */
}

void main()
{
	int *p;     /* p�� �ʱ�ȭ ���� �ʾƼ� ������(��ȿ���� ����) ���� ���� */
	GetMyData(p); /* �Լ��� ȣ���Ͽ� p�� 40����Ʈ�� �޸� �Ҵ� */
	*p = 5;       /* �Ҵ�� �޸��� ù 4����Ʈ�� 5�� ����, ���� �߻�! */
	free(p);       /* �Ҵ�� ���� �޸𸮸� ���� */
}