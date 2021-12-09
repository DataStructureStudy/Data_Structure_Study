#include <stdio.h>

void main()
{
    int data;
    FILE *p_file = fopen("jin.dat", "rb");  /* 읽기 모드로 바이너리 파일을 연다 */
    if (NULL != p_file) {  /* 파일 열기에 성공한 경우 */
        /* 읽기모드로 열면 파일의 처음위치부터 데이터를 읽을 수 있다.
        파일의 첫 4바이트(int)만큼 읽어서 data의 시작 주소에 넣음 */
        fread(&data, sizeof(int), 1, p_file);
        fclose(p_file);  /* 파일을 닫는다 */
	printf("file data : %d(0x%04x)\n", data,data);  /* 파일에서 읽은 값을 출력한다. */
    }
}