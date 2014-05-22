#include <stdio.h>
#include <stdlib.h>
#include "data_structures.h"

#define sizeOfStorage 10

const person_type uniquePerson = {"n", "a", 20, 100, 200};

person_type storage[sizeOfStorage];

void initStorage(person_type *, int);
void printStorage(person_type *, int);

int main(void) {

	initStorage(storage, sizeOfStorage);
	printStorage(storage, sizeOfStorage);

	return EXIT_SUCCESS;
}

void initStorage(person_type *storage, int numberOfElements)
{
	int i = 0;
	for(i = 0; i < numberOfElements; i++)
	{
		storage[i] = uniquePerson;
		storage[i].age = i;
	}
}
void printStorage(person_type *storage, int numberOfElements)
{
	int i = 0;
		for(i = 0; i < numberOfElements; i++)
		{
			printf("storage[%d].age = %d;\n", i, storage[i].age);
		}

}

