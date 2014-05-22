#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int cnt;
	for(cnt = 10; cnt >5; cnt--)
	{
		if(cnt=8) 						// Условия с оператором присваивания всегда возвращают 1
			printf("cnt = %i\n", cnt);	// Цикл никогда не закончит свое выполнение
	}
	return EXIT_SUCCESS;
}
