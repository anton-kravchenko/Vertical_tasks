#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char tbl1[]= {0,1,2,3,4,5,6,7,8,9};
	char tbl2[10]={0,1,2,3,4,5,6,7,8,9};
	char tbl3[11]={0,1,2,3,4,5,6,7,8,9};

	printf("sizeof(tbl1) = %d, sizeof(tbl2) = %d, sizeof(tbl3) = %d\n", sizeof(tbl1), sizeof(tbl2), sizeof(tbl3));
	puts("sizeof возвращает размер памяти в байтах на который ссылается указатель. "
		 "В нашем случае его использование дает нам ожидаемые результаты, из-за того, что каждый элемент массива весит 1 байт."
		 "Для того, чтобы получать правильные результаты при работе с оператором sizeof в контексте вычисления длины массива"
		 " необходимо результат sizeof делить на размер элементов, которые содержит массив.");

	int tbl4[]= {0,1,2,3,4,5,6,7,8,9};
	int tbl5[10]={0,1,2,3,4,5,6,7,8,9};
	int tbl6[11]={0,1,2,3,4,5,6,7,8,9};

	printf("sizeof(tbl4) = %d, sizeof(tbl5) = %d, sizeof(tbl6) = %d\n", sizeof(tbl4), sizeof(tbl5), sizeof(tbl6));
	printf("tbl4 length = %d, tbl5 length = %d, tbl6 length = %d\n", sizeof(tbl4)/sizeof(tbl4[0]), sizeof(tbl5)/sizeof(tbl5[0]), sizeof(tbl6)/sizeof(tbl6[0]));

	return EXIT_SUCCESS;
}
