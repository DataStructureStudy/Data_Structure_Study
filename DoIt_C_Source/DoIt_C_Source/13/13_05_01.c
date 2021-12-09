#include <stdio.h>
void main()
{
    int data = 0x12345678, i;
    char *p = (char *)&data;
    
	/* 4바이트 데이터를 바이트 단위로 값을 출력하기 위해서 4번 반복함 */
    for (i = 0; i < 4; i++) {
        /* p는 char *형이라서 저장된 시작 주소에서 1바이트 크기만 사용 */
        printf("%X, ", *p);
        p++;  /* p가 char *형이라서 1바이트 뒤에 있는 주소로 값이 변경됨 */
    }
}