#include <stdio.h>
void main()
{
	char temp[32];
	scanf("%s", temp);  /* 문자열을 입력 받음. 배열 변수 이름을 사용하면 
               해당 배열의 시작 주소를 의미하기 때문에 &연산자를 쓰면 안됨   */
	printf("input string : %s \n", temp);  /* 입력받은 문자열 출력 */
}
