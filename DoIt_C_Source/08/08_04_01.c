#include <stdio.h>

void main()
{
    /* 2015�� 12�� 31���� 3���� ���� ������ ����� �����Ѵ�. */
    int year = 2015, month = 12, day = 31;
    /* ���� �Ϸ� ������Ų��. day�� 31���� 32�� �ȴ�. */
    day++;
    /* ���� 31���� �ʰ��ϸ� 1�Ϸ� �����ϰ� ���� ������Ų��. */
    if (day > 31) {
        month++; /* ���� �Ϸ� ������Ų��. Month�� 12���� 13�� �ȴ�. */
        day = 1;  /* ���� �����Ǿ����� �ش� ���� ó���� 1�Ϸ� �����Ѵ�. */
                  /* ���� 12���� �ʰ��ϸ� 1���� �����ϰ� ������ ������Ų��. */
        if (month > 12) {
            year++; /* ������ �ϳ� ������Ų��. Year�� 2014���� 2015�� �ȴ�. */
            month = 1; /* ������ �����Ǿ����� 12������ 1���� �����Ѵ�. */
        }
    }
    printf("Date : %d�� %d�� %d��\n", year, month, day);
}