#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int palindrome(char string[]);

int main(void) {

	int returnValue;
	char string[SIZE];
	fgets(string, SIZE, stdin);
	string[strlen(string) - 1] = '\0';
	returnValue = palindrome(string);



	if (returnValue != 1) {

		printf("%s is NOT a palindrome", string);


	}

	else
	{
		printf("%s is a palindrome", string);

	}





	return 0;
}



int palindrome(char string[])
{
		int i = 0, k;
		int middle = strlen(string)/2, len = strlen(string);
		




		for (i = 0; i < middle; i++)
		{
			int backwards = (len -1) - i;
			if (string[i] != string[backwards])

				return 2;

		}


		return 1;

}