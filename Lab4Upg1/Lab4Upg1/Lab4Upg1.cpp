#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 10


void funk(int slumpf[])
{

	int i;
	srand(time(NULL));
	for (i = 0; i < 10; i++)
		slumpf[i] = rand() % 10 + 1;

}

int countElement(int inputArray[], int elementToCount) {
	int count = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (inputArray[i] == elementToCount)
		{
			count++;
		}

	}

	return count;
}


int main(void) {

	int slump[10], i, searchedNumber, amountTime;
	funk(slump);
	
	for (i = 0; i < 10; i++) {
		printf("Random Number: %d\n", slump[i]);

	}

	printf("Number you want to search for: ");
		scanf_s("%d", &searchedNumber);

		amountTime = countElement(slump, searchedNumber);

		printf("The number %d was found %d times!\n", searchedNumber, amountTime);

	return 0;
}



