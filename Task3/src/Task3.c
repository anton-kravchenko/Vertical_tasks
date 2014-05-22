#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int period = 360;
const int amplitude = 5000;
const int steadyComponent = 5000;
const int pi = 180;

void showTable(double *);


// Добавил make file с опцией для линковщика, чтобы подключить мат. функции
int main(void) {

	double sinTable[period];

	double angle = 0;
	double angleStep = (double) 2 * pi / period;
	double temp = 0;

	int i = 0;
	for(i = 0; i < period; i++, angle +=angleStep )
	{
		temp = sin(angle);
		temp = temp > 0 ? temp * amplitude : 0;
		sinTable[i] = temp;
	}
	showTable(sinTable);
	return EXIT_SUCCESS;
}

void showTable(double *table)
{
	int angle = 0;
	int angleStep =  2 * pi / period;
	int i = 0;
	for(i = 0; i < period; i++, angle+=angleStep)
	{
		printf("sin(%d) = %f\n", angle, table[i]);
	}
}
