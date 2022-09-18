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

int countElement(int inputArray[], int elementToCount) {




	return 2;
}


/* https://codeforwin.org/2015/07/c-program-to-find-frequency-of-each-element-in-array.html */



int main(void) {


	int slump[10], i, searchedNumber;
	funk(slump);
	
	
	for (i = 0; i < 10; i++) {
		printf("Random Number: %d\n", slump[i]);

	}


	printf("Number you want to search for: ");
		scanf_s("%d", &searchedNumber);

		int amountTime = countElement(slump[], searchedNumber);

	return 0;
}



