#include <stdio.h>
/* buffer : 사용자가 입력한 문자열을 저장할 배열
   limit : 최대 입력 가능한 문자 개수
   이 함수가 1을 반환하면 정상 입력되었다는 뜻이고
   0을 반환하면 너무 길게 입력해서 제한된 개수만 받았다는 뜻이다 */
int GetMyString(char buffer[], int limit)
{
    int i;
    for (i = 0; i < limit; i++) { /* 최대 개수만큼만 반복 한다 */
        buffer[i] = getchar();
        if (buffer[i] == '\n') {  /* [Enter] 키가 체크되면 사용자의 입력이
                                  완료 되었다는 뜻이기 때문에 문자열을 완성시키고 함수 종료한다 */
            buffer[i] = 0;  /* [Enter] 키 위치에 0을 넣어서 문자열 완성 */
            return 1;  /* 정상적으로 입력이 완료됨 */
        }
    }
    /* 반복문을 빠져 나왔다는 뜻은 입력 개수 제한을 초과했다는 뜻이기
    때문에 현재 위치에 0을 넣고 문자열 구성을 완료 */
    buffer[i] = 0;
    rewind(stdin);  /* 표준 입력 버퍼에 남아있는 문자들을 제거함 */
    return 0;  /* 입력 초과 현상이 발생했음을 알림 */
}

void main()
{
    char temp[10];
    int state;
    /* 사용자에게 최대 9개까지만 입력받겠다고 제안함 */
    state = GetMyString(temp, 9);

    if (state == 1) printf("input : %s\n", temp); /* 정상 입력 */
    else printf("input : %s -> out of range\n", temp); /* 범위를 초과 */
}