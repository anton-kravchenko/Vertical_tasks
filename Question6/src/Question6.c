#include <stdio.h>
#include <stdlib.h>

int myFunc(int x);

int main(void) {

	int	x,y;

	x=7;

	y = myFunc(x);

	printf("x = %i; y = %i", x, y);

	return EXIT_SUCCESS;
}

int myFunc(int x)
{
	return x * 4;
}

// Когда х передается в функцию, создается локальная переменная с таким же значением, оригинальная переменная не меняется
