#include <stdio.h>
#include <stdlib.h>

typedef int bool;

int hours = 24;
int minutes = 60;
int seconds = 60;

int checkNum(int);

int main(void) {
	int h = 0;
	int min = 0;
	int sec = 0;

	int fiveNumberCounter = 0;

	for (h = 0; h < hours; h++)
	{
		fiveNumberCounter += checkNum(h);

		for (min = 0; min < minutes; min++)
		{
			fiveNumberCounter += checkNum(min);

			for (sec = 0; sec < seconds; sec++)
			{
				fiveNumberCounter += checkNum(sec);
			}
		}
	}

	printf("%d times\n", fiveNumberCounter);
	return EXIT_SUCCESS;
}

int checkNum(int num)
{
	int t = 0;
		if(0!= num && 0 == num%5 && 1 == ((num/5) % 2))
		{
			printf("single five - %d\n", num);
			t++;
		}
		if(10 == (num/5)) {
			printf("double five - %d\n", num);
			t++;
		}

	return t;
}
