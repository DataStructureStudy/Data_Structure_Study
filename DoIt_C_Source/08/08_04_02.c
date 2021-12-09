#include <stdio.h>

void main()
{
    /* 점수를 86점으로 설정한다. */
    int score = 86;
    /* 점수에 따른 등급을 저장할 변수를 선언한다. */
    char grade;

    if (score >= 90) {  /* 90점 이상인 경우 */
        grade = 'A';
    }
    else {   /* 90점보다 작은 경우 */
        if (score >= 80) { /* 80점 이상이고 90점보다 작은 경우 */
            grade = 'B';
        }
        else {   /* 80점보다 작은 경우 */
            if (score >= 70) {   /* 70점 이상이고 80점보다 작은 경우 */
                grade = 'C';
            }
            else {   /* 70점보다 작은 경우 */
                if (score >= 60) { /* 60점 이상이고 70점보다 작은 경우 */
                    grade = 'D';
                }
                else {   /* 60점보다 작은 경우 */
                    grade = 'F';
                }
            }
        }
    }
    /* 자신의 점수와 등급을 출력한다. */
    printf("당신의 점수는 %d점이고 등급은 %c 입니다. \n", score, grade);
}