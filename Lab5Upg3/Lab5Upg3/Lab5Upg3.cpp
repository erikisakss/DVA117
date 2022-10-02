#include <stdio.h>
#define NUMBERCAP 1000
#define AMOUNTNUMBERS 100


void frequencyCounter(int numbers[], int* mostCommon, int* amountTime);

int main(void) {
	int numbers[AMOUNTNUMBERS], nummer, mostCommon = 0, amountTime = 0;
	

	printf("Enter a number between 0-1000 (Max amount 100 numbers), end with a negative number\n");
	for (int i = 0; i < AMOUNTNUMBERS;)
	{
		printf("Number: ");
		scanf_s("%d", &nummer);

		if (nummer > NUMBERCAP)
		{
			continue;
		}

		if (nummer < 0)
			break;
		numbers[i] = nummer;
		
		i++;
	}

	frequencyCounter(numbers, &mostCommon, &amountTime);
	printf("%d appeared the most times, a total of %d times", mostCommon, amountTime);


	return 0;
}


void frequencyCounter(int numbers[], int* pmostCommon, int* pamountTime) {
	int nrFreq, mostCommon = 0, amountTime = 0;

	for (int i = 0; i <= NUMBERCAP; i++) {
		nrFreq = 0;

		for (int k = 0; k < AMOUNTNUMBERS && numbers[k] >= 0; k++)
		{
			if (numbers[k] == i)
			{
				nrFreq++;
			}


		}
		if (nrFreq > amountTime)
		{
			amountTime = nrFreq;
			mostCommon = i;
		}


	}
	*pmostCommon = mostCommon;
	*pamountTime = amountTime;
}