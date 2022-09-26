
#include <stdio.h>
#include<stdlib.h>




float currencyConverter(float sek, float dollarKurs)
{

	float dollarValue = sek * dollarKurs;

	return dollarValue;


}



int main(void)
{

	int goAgain = 1;
	do
	{



		float dollar, sek, exchangeRate = 0.1;


		printf("SEK to $ Converter\n\n");
		printf("Enter how many SEK you want to convert to $: ");
		scanf_s("%f", &sek);
		

		dollar = currencyConverter(sek, exchangeRate);

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





