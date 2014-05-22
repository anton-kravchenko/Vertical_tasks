#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char
	sw[256];
	printf("Enter symbol a..c\n");
	scanf("%s", sw);

	switch(sw[0]){
	case 'a': printf("Your enter symbol a\n"); // Упущено ключевое слово break после каждого кейса
	case 'b': printf("Your enter symbol b\n"); // Поэтому, после того как выполнилось одно условие, все остальные игнорируются
	case 'c': printf("Your enter symbol c\n");
	}

	return EXIT_SUCCESS;
}
