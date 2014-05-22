#include <stdio.h>
#include <stdlib.h>

#define project3

int main(void) {

#ifdef project1
	printf("Проект No1");
#endif

#ifdef project2
	printf("Проект No2");
#endif

#ifdef project3
	printf("Проект No3");
#endif
	return EXIT_SUCCESS;
}
