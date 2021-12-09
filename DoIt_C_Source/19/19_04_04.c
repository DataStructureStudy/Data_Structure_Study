#include <stdio.h>

void main()
{
    char temp[64];   /* 파일에서 문자열을 입력 받을 배열 변수 */
    FILE *p_file = fopen("tips.txt", "rt");  /* 읽기 모드로 텍스트 파일을 연다 */
    if (NULL != p_file) {  /* 파일 열기에 성공한 경우 */
        /* 텍스트 파일의 끝은 EOF(End of File)문자로 구분하는데 fscanf 함수가
           EOF 문자를 만나면 EOF 값을 반환해준다. 따라서 EOF를 반환할 때까지
           반복하면서 문자열을 읽어내면 된다. (temp는 &temp[0]와 동일) */
        while (EOF != fscanf(p_file, "%s", temp)) {
            /* 파일에서 읽은 문자열을 화면에 출력 */
            printf("%s\n", temp);
        }
        fclose(p_file);   /* 파일을 닫는다 */
    }
}