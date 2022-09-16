#include <stdlib.h>
#include <stdio.h>
#include <time.h>




void funk(int slumpf[])
{

	int i;
	srand(time(NULL));
	for (i = 0; i < 10; i++)
		slumpf[i] = rand() % 10 + 1;

}


int main(void) {


	int slump[10], i;
	funk(slump);
	
	
	for (i = 0; i < 10; i++) {
		printf("Random Number: %d\n", slump[i]);

	}



	return 0;
}



