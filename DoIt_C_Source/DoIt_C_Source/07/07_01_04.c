#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 3;   /* 두 변수에 초기값을 5와 3으로 설정 */
								/* OR 연산자 */
	int result1 = 0 || 1;
	/* AND 연산자. 3 && -1은 1 && 1과 같기 때문에 결과는 참이다 */
	int result2 = 3 && -1;
	/* OR 연산자. data1 == 3은 거짓, data2 == 3은 참이다. */
	int result3 = data1 == 3 || data2 == 3;
	/* AND 연산자. data1 == 3은 거짓, data2 == 3은 참이다. */
	int result4 = data1 == 3 && data2 == 3;
	/* data1은 0이 아니라서 참이다. 참에 NOT 연산하면 거짓이 된다. */
	int result5 = !data1;
	/* 관계 연산의 결과는 0 또는 1로 나온다 */
	printf("result : %d, %d, %d, %d, %d\n", result1, result2, result3, result4, result5);
}
