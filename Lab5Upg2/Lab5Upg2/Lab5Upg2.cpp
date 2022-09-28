#include <stdio.h>
#include <string.h>
#define SIZE 100






void sentenceSeparator(char sentence[], char* thirdWord);


int main(void) {

	char sentence[SIZE], thirdWord;
	printf("Enter a sentence: ");
	fgets(sentence, SIZE, stdin);

	sentenceSeparator(sentence, &thirdWord);



	printf("%c", thirdWord);






	return 0;

}

void sentenceSeparator(char sentence[], char* thirdWord) {

	int i, enterCounter = 0;
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
			break;
		}

		
		   


	}

	for (i; i < len; i++)
	{
		*thirdWord = *(sentence + i);
	}


}