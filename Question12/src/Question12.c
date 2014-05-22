#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MY_CONST 0x123456789ULL				// Записи эквавалентны, получаем соотв. значение в шестнадцатиричной кодировке
#define MY_CONST1 0x123456789

#define MY_CONST2 0x12345678				// Корректно

#define MY_CONST3 ((1<<32)||(3<<4))
#define MY_CONST3 ((1<<32)||(3<<4))			// Корректно
#define MY_CONST3 ((1<<30)||(3<<4))

#define MY_CONST5 (1<<32)ULL				// alias ULL должен стоять сразу после чила

#define MY_CONST6 (1UL<<32)					// MY_CONST6, MY_CONST4, MY_CONST7 - 2^32(33) - Получаем переполнение int'a и он сбрасывается в 0
#define MY_CONST7 (1ULL<<33)
#define MY_CONST4 (1<<32)

int main(void) {

	printf("%d\n", MY_CONST);
	printf("%d\n", MY_CONST1);
	printf("%d\n", MY_CONST2);
	printf("%d\n", MY_CONST3);
	printf("%d\n", MY_CONST4);
//	printf("%d\n", MY_CONST5);
	printf("%d\n", MY_CONST6);
	printf("%d\n", MY_CONST7);
	return EXIT_SUCCESS;
}
