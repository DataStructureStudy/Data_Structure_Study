#include <stdio.h>
/* People 구조체를 선언하면서 typedef 문법을 사용하여 
   Person 데이터형으로 재정의까지 같이 함 */
typedef struct People
{
    char name[12];
    unsigned short int age;
    float height;
    float weight;
} Person;

void main()
{
    Person data;   

    printf("대상자의 정보를 입력하세요\n");
    printf("이름 : ");
    scanf("%s", data.name);
    printf("나이 : ");
    /* %u라고 적으면 unsigned int 형으로 처리되기 때문에 
       unsigned short int 형으로 입력 받으려면 %hu 사용 */
    scanf("%hu", &data.age);  
    printf("키 : ");
    scanf("%f", &data.height);
    printf("몸무게 : ");
    scanf("%f", &data.weight);

    printf("\n입력한 정보는 다음과 같습니다.\n");
    /* 키와 몸무게는 소수점 첫째자리까지만 보여주기 위해서
       %.1f 형식으로 출력함 */
    printf("%s : %d세, %.1fcm, %.1fkg\n", data.name, data.age, data.height, data.weight);
}