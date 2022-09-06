#include <stdio.h>

int main(void)

{

	int morseNumber;

	printf("Ange nummer: ");
	scanf_s("%d", &morseNumber);

	switch (morseNumber) {

	case 0:
		printf("Morsekod: -----");
		break;

	case 1:
		printf("Morsekod: .----");
		break;

	case 2:
		printf("Morsekod: ..---");
		break;

	case 3:
		printf("Morsekod: ...--");
		break;

	case 4:
		printf("Morsekod: ....-");
		break;


	case 5:
		printf("Morsekod: .....");
		break;

	default:

		printf("Ogiltigt nummer");

		break;


	
	}













	return 0;
}
