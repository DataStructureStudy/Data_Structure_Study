/* 1,000 이하의 소수를 나열합니다(버전 1). */
#include <stdio.h>

int main(void)
{
	int i, n;
	int n1, n2;
	unsigned long counter = 0; 	/* 나눗셈 횟수 */
	scanf("%d %d", &n1, &n2);
	for (n = n1; n <= n2; n++) {
		for (i = 2; i < n; i++) {
			counter++;
			if (n % i == 0)		/* 나누어떨어지면 소수가 아닙니다. */
				break;			/* 더 이상의 반복은 불필요합니다. */
		}

		if (n == i)				/* 마지막까지 나누어떨어지지 않았습니다. */
			printf("%d\n", n);
	}

	printf("나눗셈을 실행한 횟수 : %lu\n", counter);

	return 0;
}