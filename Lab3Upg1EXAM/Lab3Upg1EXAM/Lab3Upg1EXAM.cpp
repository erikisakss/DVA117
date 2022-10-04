
#include <stdio.h>
#include<stdlib.h>



//EXAMINATION
void currencyConverter(float sek, float *dollar)
{
	float exchangeRate = 0.1;
	float dollarValue = sek * exchangeRate;
//EXAMINATION
	*dollar = dollarValue;


}



int main(void)
{

	int goAgain = 1;
	do
	{



		float dollar, sek;


		printf("SEK to $ Converter\n\n");
		printf("Enter how many SEK you want to convert to $: ");
		scanf_s("%f", &sek);

		//EXAMINATION
	 currencyConverter(sek, &dollar);

		printf("%.2f SEK = %.2f$\n\n\n", sek, dollar);

		printf("Do you want to run the converter again? 1 = Yes 0 = NO: ");
		scanf_s("%d", &goAgain);



		if (goAgain != 1 && goAgain != 0) {
			printf("Unknown number, try again");
			scanf_s("%d", &goAgain);
		}

		void clrscr();
		{

			system("@cls || clear");
		}




	} while (goAgain == 1);


	return 0;
}




