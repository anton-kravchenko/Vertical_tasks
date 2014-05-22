#include <stdio.h>
#include <stdlib.h>

void memcpy_int(int *, int *, int);

int allocSize = 10;

int main(void) {

	int * a = (int *)calloc(allocSize, sizeof(int));
	int b[allocSize+5];

	int i = 0;
	for(i = 0; i < 15; i++)
	{
		b[i] = i;
	}

	for(i = 0; i < allocSize; i++)
		printf("%d, ", a[i]);

	puts("\nafter memcp");

	memcpy_int(a, &b[5], 10);

	for(i = 0; i < allocSize; i++)
			printf("%d, ", a[i]);

	return EXIT_SUCCESS;
}
void memcpy_int(int *Dst, int *Src, int sz_int)
{
	for(;sz_int > 0; sz_int--) // Тут в любом случае необходимо условие выхода из цикла, ( sz_int > 0 )
	{						   // потому что компилятор не проверяет выход за границы массива
		*Dst++ = ++*Src;	   // В случае копирования строк код
	}						   // while (*Dst++ = ++*Src)
}							   // 				;
							   // работал бы корректно, потому что по достижению символа \0 цикл прервется
