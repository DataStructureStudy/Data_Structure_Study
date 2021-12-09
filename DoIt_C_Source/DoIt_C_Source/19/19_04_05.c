#include <stdio.h>

void main()
{
    char temp[64];   /* 파일에서 문자열을 입력 받을 배열 변수 */
    FILE *p_file = fopen("tips.txt", "rt");  /* 읽기 모드로 텍스트 파일을 연다 */
    if (NULL != p_file) { /* 파일 열기에 성공한 경우 */
        /* 텍스트 파일의 끝은 EOF(End of File)문자로 구분하는데 fgets 함수가
            EOF 문자를 만나면 NULL 값을 반환해준다. 따라서 NULL을 반환할 때까지
            반복하면서 문자열을 읽어내면 된다. fgets 함수의 두 번째 인자는
            첫 번째 인자에 사용되는 메모리의 크기를 명시한다 */
        while (NULL != fgets(temp, sizeof(temp), p_file)) {
            /* 파일에서 읽은 문자열을 화면에 출력한다. fgets 함수는 fscanf 함수와
            달리 줄의 끝에 있는 \n도 읽어서 temp 배열의 마지막에 넣어주기
            때문에 printf 함수를 사용할 때 \n을 해주지 않는다 */
            printf("%s", temp);
        }
        fclose(p_file);  /* 파일을 닫는다 */
    }
}