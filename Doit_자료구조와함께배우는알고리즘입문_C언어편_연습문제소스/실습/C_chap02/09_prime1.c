/* 1,000 ������ �Ҽ��� �����մϴ�(���� 1). */
#include <stdio.h>

int main(void)
{
	int i, n;
	int n1, n2;
	unsigned long counter = 0; 	/* ������ Ƚ�� */
	scanf("%d %d", &n1, &n2);
	for (n = n1; n <= n2; n++) {
		for (i = 2; i < n; i++) {
			counter++;
			if (n % i == 0)		/* ����������� �Ҽ��� �ƴմϴ�. */
				break;			/* �� �̻��� �ݺ��� ���ʿ��մϴ�. */
		}

		if (n == i)				/* ���������� ����������� �ʾҽ��ϴ�. */
			printf("%d\n", n);
	}

	printf("�������� ������ Ƚ�� : %lu\n", counter);

	return 0;
}