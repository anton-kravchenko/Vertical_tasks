#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int pirog = 100;
	int carlsonTime = 20;
	int malishTime = 30;

	float carlsonPart = pirog / carlsonTime;
	float malishPart = pirog / malishTime;

	int i = pirog;
	int time = 0;
	while(i > 0)
	{
		i -= carlsonPart;
		i -= malishPart;
		time++;
	}
	printf("%d minutes\n", time);
	return EXIT_SUCCESS;
}
