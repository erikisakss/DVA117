#include <stdio.h>

int main(void)

{

	float frys;
	float ejFrys;

	printf("Vad �r kilopriset p� fryst kyckling? ");
	scanf_s("%f", &frys);

	printf("Vad �r kilopriset p� f�rsk kyckling? ");
	scanf_s("%f", &ejFrys);


	if (frys < ejFrys) {

		printf("Fryst kyckling �r billigare");
	}

	else if (ejFrys < frys) {

		printf("F�rsk kyckling �r billigare");
	}
	
	else if (frys == ejFrys) {

		printf("Det �r lika billigt");
	}

	





	return 0;
}