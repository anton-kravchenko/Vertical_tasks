#include <stdio.h>
#include <stdlib.h>

int main(void) {

	typedef struct{
		int arg2;
		char arg1;
	}my_type;

	my_type my1, my2;

	char arr1[10], arr2[10];
	const my_type my3={1,2};

	my1 = {3,4}; 						// Такой вариант инициализации
	arr2 = {0,1,2,3,4,5,6,7,8,9};		// возможен только при объявлении

	my2 = my3;							// Все ок - значения элементов скопируются, структуры останутся независимыми


	memset(arr1, 5, sizeof(arr1));		// sizeof(arr1) - корректно только для char
//	arr2 = arr1;						// Имя масива это константный указатель на первый его элемент,
										// поэтому мы не можем присваивать таким образом один массив другому

	return EXIT_SUCCESS;
}
