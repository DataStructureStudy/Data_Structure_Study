#include <stdio.h>
/* dest_data 변수의 bit_num 번째 있는 비트를 0으로 설정하는
함수이다. 이 함수는 해당비트가 0으로 설정된 값을 반환한다. */
unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num)
{
    /* 1 바이트 변수라서 비트이동은 0 ~ 7까지 가능하다 */
    if (bit_num < 8) dest_data = dest_data & ~(0x01 << bit_num);
    /*변경된 값을 반환 */
    return dest_data;
}

void main()
{
    unsigned char lamp_state = 0x7F;   /* 0x7F → 0111 1111 */
    printf("%X->", lamp_state);        /* 변경 전 값 출력 */
                                       /* lamp_state 변수의 3번째 비트를 0으로 설정 */
    lamp_state = ResetBit(lamp_state, 3);  /* 0x77 → 0111 0111 */
    printf("%X\n", lamp_state);  /* 변경 후 값 출력 */
}