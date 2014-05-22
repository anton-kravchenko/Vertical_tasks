#include "UseGlobalVar.h"


void changeAndPringGV()
{
	extern int globalInt;
	printf("before change in UseGlobalVar, globalInt = %d\n", globalInt);
	globalInt = 2;
	printf("change global var from UseGlobalVar, globalInt = %d\n", globalInt);

}
