#include <stdio.h>

int main(void)

{

	float frys;
	float ejFrys;

	printf("Vad är kilopriset på fryst kyckling? ");
	scanf_s("%f", &frys);

	printf("Vad är kilopriset på färsk kyckling? ");
	scanf_s("%f", &ejFrys);


	if (frys < ejFrys) {

		printf("Fryst kyckling är billigare");
	}

	else if (ejFrys < frys) {

		printf("Färsk kyckling är billigare");
	}
	
	else if (frys == ejFrys) {

		printf("Det är lika billigt");
	}

	





	return 0;
}