#include <stdio.h>

void main()
{
    /* 점수를 86점으로 설정한다. */
    int score = 86;
    /* 점수에 따른 등급을 저장할 변수를 선언한다. */
    char grade;
    /* 등급을 결정하는 점수가 10단위로 달라지기 때문에 10으로 나눈 몫을
    이용하면 특정 숫자와 비교하도록 변경 가능하다.
    90 ~ 99 사이의 숫자를 10으로 나눈 몫은 9이다. */
    switch (score / 10) {
		case 10:               /* 100은 10으로 나누면 10이다. */
		case 9:
			grade = 'A';        /* 90점 이상 */
			break;
		case 8:
			grade = 'B';       /* 80점 <= score < 90 */
			break;
		case 7:
			grade = 'C';        /* 70점 <= score < 80 */
			break;
		case 6:
			grade = 'D';        /* 60점 <= score < 70 */
			break;
		default:
			grade = 'F';        /* 60점보다 작은 경우 */
			break;
    }
    /* 자신의 점수와 등급을 출력한다. */
    printf("당신의 점수는 %d점이고 등급은 %c 입니다. \n", score, grade);
}