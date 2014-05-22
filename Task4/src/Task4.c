#include <stdio.h>
#include <stdlib.h>
#include "GlobalVars.h"
#include "UseGlobalVar.h"
int main(void) {


	printf("predefined globalIntValue = %d\n", globalInt);
	globalInt = 1;
	printf("change global var in main, globalInt = %d\n", globalInt);

	changeAndPringGV();

	return EXIT_SUCCESS;
}
