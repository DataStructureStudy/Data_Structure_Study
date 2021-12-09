#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 3;   /* µÎ º¯¼ö¿¡ ÃÊ±â°ªÀ» 5¿Í 3À¸·Î ¼³Á¤ */

	int result1 = data1 + data2;       /* µ¡¼À           */
	int result2 = data1 * data2;       /* »¬¼À            */
	int result3 = data1 / data2;       /* ³ª´°¼À (¸ò)     */
	int result4 = data1 % data2;       /* ³ª´°¼À (³ª¸ÓÁö) */

	printf("result : %d, %d, %d, %d\n", result1, result2, result3, result4);
}
