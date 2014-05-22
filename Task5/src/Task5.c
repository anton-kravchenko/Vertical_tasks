#include <stdio.h>
#include <stdlib.h>

#include "DataStructures.h"

void printStructure(names*, char*);

int main(void) {

	names min, max;

	char *minLabel = "min structure";
	char *maxLabel = "max structure";

	min.nameA = 50;
	min.nameB = 20;
	min.nameC = 33;

	max.nameA = 100;
	max.nameB = 55;
	max.nameC = 77;

	printStructure(&min, minLabel);
	printStructure(&max, maxLabel);

	return EXIT_SUCCESS;
}

void printStructure(names* data, char* label)
{
	puts(label);
	printf("nameA = %c, nameB = %d, nameC = %c\n", data->nameA, data->nameB, data->nameC);
}
