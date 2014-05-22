#include <stdio.h>
#include <stdlib.h>
#include "DataTypes.h"

void selectStructuresFor16BitArch(int *);
void selectStructuresFor32BitArch(int *);

int main(void) {
	char  a; short b; int c; long d; long long e;
	float f;
	double g;
	char* pointer;
	printf("sizeof(char) = %d, sizeof(short) = %d, sizeof(int) = %d, sizeof(long) = %d, sizeof(long long) = %d\n",
			sizeof a, sizeof b, sizeof c, sizeof d, sizeof e );
	printf("sizeof(float) = %d, sizeof(double) = %d\n", sizeof f, sizeof g);
	printf("sizeof(pointer) = %d\n\n", sizeof pointer);

	// Каждая архитектура определяет свои механизмы работы с памятью, в частности с указателями.
	// Под указателем понимается число, которое указывает на соответствующую ячейку памяти.
	// Соответственно выбор размера указателя вытекает из объма доступной для индексации памяти.
	// Обычно это int с размером 4 байта ( соответствует размеру машинного слова ).
	// Используя адресную арифметику мы можем "бегать" по нашей памяти.
	// Структуры - непрерывная область памяти, размер которой находится в целочисленных отношениях с размером указателя.
	// Такой подход наиболее удобен и в то же время "выравнивание" памяти является вынужденной мерой.
	// Поэтому, чтобы наиболее эффективно использовать доступную память, рекомендуется подбирать элементы структур таким образом,
	// чтобы суммарный размер ее элементов был кратен размеру указателя.


	printf("sizeof my1_type = %d, "
		   "sizeof my2_type = %d, "
		   "sizeof my3_type = %d, "
		   "sizeof my4_type = %d, "
		   "sizeof my5_type = %d, "
		   "sizeof my6_type = %d, "
		   "sizeof my7_type = %d\n\n",

			sizeof (my1_type),
			sizeof (my2_type),
			sizeof (my3_type),
			sizeof (my4_type),
			sizeof (my5_type),
			sizeof (my6_type),
			sizeof (my7_type));

	// Как видно из вывода, размеры всех структур кратны 4.
	// Одноко, если посчитать объем эффективно используемого пространство для какждой из структур, получим

	int realSturesSize[] = {13, 9, 11, 12, 20, 16, 12};

	// Теперь выберем те структуры, которые лучше подходят для 16 или 32 битной архитектуры

	selectStructuresFor16BitArch(&realSturesSize);
	selectStructuresFor32BitArch(&realSturesSize);

	// Максимально возможная потеря памяти при размере указателя в 4 байта составляет 3 байта
	// Поэтому подобные оптимизиции имеют смысл либо когда память крайне ограничена, либо когда таких структур используется крайне много

	return EXIT_SUCCESS;
}

void selectStructuresFor16BitArch(int *storage)
{

	int i = 0;
	puts("16 bit architecture");
	for(i = 0; i < 7; i++)
	{
		if(0 == storage[i] % sizeof(i))
			printf("structure my%d_type size = %d -> fit perfectly\n", i+1, storage[i]);
	}
}

void selectStructuresFor32BitArch(int *storage)
{

	int i = 0;
	puts("\n16 bit architecture");
	for(i = 0; i < 7; i++)
	{
		if(0 == storage[i] % 2)
			printf("structure my%d_type size = %d -> fit perfectly\n", i+1, storage[i]);
	}
}
