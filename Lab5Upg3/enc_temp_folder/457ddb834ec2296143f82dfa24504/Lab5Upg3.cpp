#include <stdio.h>
#define MAX 1000
#define MAXNUMBER 100


void frequencyCounter(int numbers[], int* mostCommon, int* amountTime);

int main(void) {
	int numbers[MAXNUMBER], nummer, mostCommon = 0, amountTime = 0;
	int i = 0, counter = 0;


	for (i = 0; i < MAXNUMBER; i++)
	{
		printf("Number: ");
		scanf_s("%d", &nummer);
		if (nummer < 0)
			break;
		numbers[i] = nummer;
		counter++;

	}
	frequencyCounter(numbers, &mostCommon, &amountTime);
	printf("%d appeared the most times, a total of %d times", mostCommon, amountTime);



	





	return 0;
}


void frequencyCounter(int numbers[], int* mostCommon, int* amountTime) {
	int nrFreq;

	for (int i = 0; i <= MAX; i++) {
		nrFreq = 0;

		for (int k = 0; k < MAX && numbers[i] >= 0; k++)
		{
			if (numbers[k] == i)
			{
				nrFreq++;
			}


		}
		if (nrFreq > *amountTime)
		{
			*amountTime = nrFreq;
			*mostCommon = i;
		}


	}
}