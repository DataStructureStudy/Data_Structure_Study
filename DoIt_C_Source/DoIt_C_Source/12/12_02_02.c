#include <stdio.h>
/* 매개변수 data의 [ ]는 숫자를 적지 않아도 된다. 실제로 전달되는 배열의
크기에 영향을 받기 때문에 여기에 어떤 숫자를 적어도 무시 된다. */
int GetStringLength(char data[])
{
    int count = 0;
    /* 0이 나올 때까지 문자의 개수를 더한다 */
    while (data[count]) count++;  /* while(data[count] != 0) count++; 과 동일 */
                                  /* 문자열의 길이를 반환한다 */
    return count;
}

void main()
{
    int data_length;  /* 문자열 길이를 저장할 변수 */
    char data[10] = { 'h', 'a', 'p', 'p', 'y', 0, };  /* “happy” 문자열을 저장함 */
                                                      /* data 변수에 들어있는 문자열의 길이를 구한다 */
    data_length = GetStringLength(data);
    /* 문자열의 길이(문자의 개수)를 출력한다. */
    printf("data length = %d\n", data_length);
}