#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 300


int palindrome(char lowerCaseString[]);
void signRemover(char string[], char fixedString[]);
void lowerCase(char fixedString[], char lowerCaseString[]);
int main(void) {

	int runAgain = 0;
					//EXAMINATION 3 nya variabler
	int returnValue, noPalindrome = 0, yesPalindrome = 0, longestString = 0;
	char inputString[SIZE], fixedString[SIZE], lowerCaseString[SIZE];

	do
	{
		printf("Enter a palindrome: \n");
		scanf("%[^\n]s", inputString);
		while (getchar() != '\n');
		signRemover(inputString, fixedString);
		lowerCase(fixedString, lowerCaseString);
		returnValue = palindrome(lowerCaseString);

		

		if (returnValue != 1) {

			printf("%s is NOT a palindrome\n", inputString);
			//EXAMINATION
			noPalindrome++;

		}

		else
		{
			printf("%s is a palindrome\n", inputString);
			//EXAMINATION
			yesPalindrome++;
			if (strlen(lowerCaseString) > longestString)
			{
				longestString = strlen(lowerCaseString);
			}
			
		}
		//EXAMINATION
		printf("You have entered %d Palindromes and %d Non-Palindromes\n", yesPalindrome, noPalindrome);
		printf("The longest palindrome is %d characters!\n", longestString);

		printf("Would you like to run again? 1 = YES 0 = NO\n");
		scanf_s("%d", &runAgain);
		while (getchar() != '\n');

	} while (runAgain == 1);


	return 0;
}



int palindrome(char lowerCaseString[])
{
	int i = 0;
	int middle = strlen(lowerCaseString) / 2, len = strlen(lowerCaseString);





	for (i = 0; i < middle; i++)
	{
		int backwards = (len - 1) - i;
		if (lowerCaseString[i] != lowerCaseString[backwards])

			return 2;

	}


	return 1;

}


void signRemover(char string[], char fixedString[])
{
	int i, k;
	int len = strlen(string);

	for (i = 0, k = 0; i < len; i++)
	{


		if (isalpha(string[i]) == 0)
			continue;
		if (string[i] == ' ')
			continue;

		fixedString[k] = string[i];
		k++;
	}


	fixedString[k] = '\0';

}



void lowerCase(char fixedString[], char lowerCaseString[])
{
	int i, k;
	int len = strlen(fixedString) + 1;

	for (i = 0, k = 0; i < len; i++, k++)
	{
		lowerCaseString[i] = tolower(fixedString[k]);


	}




}