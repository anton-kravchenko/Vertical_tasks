#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int cnt=0;
	while(cnt < 10)
	{
		printf("cnt++ = %i\n", cnt); // Все что находится в скобрах является строковым литералом
									 //	и никаого отношения к переменной cnt не имеет
									 // условие всегда будет возвращать true
	}

	return EXIT_SUCCESS;
}
