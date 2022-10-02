#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void) {

	char sentence[SIZE], * thirdWord{};
	int i, enterCounter = 0;
	


	printf("Enter a sentence: ");
	fgets(sentence, SIZE, stdin);
	int len = strlen(sentence);

	//Bestämmer vart ord 3 ligger i meningen
	for (i = 0; i < len; i++)
	{
		if (sentence[i] == ' ')
		{
			enterCounter++;
		}

		if (enterCounter == 2)
		{
			thirdWord = &sentence[i];
			break;
		}

	}

	if (enterCounter < 2)
	{
		printf("Too few words");
	}

	else
	{
	printf(thirdWord);
	}



	return 0;

}

