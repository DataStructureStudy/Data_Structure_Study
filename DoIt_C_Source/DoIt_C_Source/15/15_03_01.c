#include <stdio.h>
void main()
{
    /* data �迭�� 1 ~ 5 ������ ���� �����ϰ� �ִ� */
    char data[5] = { 1, 2, 3, 4, 5 };
    /* �ջ꿡 ����� result ������ 0���� �ʱ�ȭ �Ѵ�. */
    int result = 0, i;
    char *p = data;  /* data �迭�� ���� ��ġ�� ������ ���� p�� �����Ѵ� */

                     /* 5�� �ݺ��ϸ鼭 ������ p�� ����Ͽ� �迭�� �� �׸��� result ������ �ջ� */
    for (i = 0; i < 5; i++) {
        result = result + *p;  /* ������ p�� ����Ű�� ����� ���� result�� �ջ� */
        p++; /* data �迭�� ���� �׸����� �ּҸ� �̵�. data[0] -> data[1] -> ... */
    }
    /* �ջ��� ����� ����Ѵ�. */
    printf("data �迭�� �� ����� ���� %d�Դϴ�\n", result);
}