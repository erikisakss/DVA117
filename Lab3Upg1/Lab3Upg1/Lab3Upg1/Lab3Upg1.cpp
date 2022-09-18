#include <stdio.h>
#include<stdlib.h>




float currencyConverter(float sek)
{
	
	float dollarValue = sek / 10.7;

	return dollarValue;


}



	int main(void)
	{

		int goAgain = 1;
		do
		{

		

			int sek;
			float dollar;

			printf("SEK to $ Converter\n\n");
			printf("Enter how many SEK you want to conver to $: ");
			scanf_s("%d", &sek);

			dollar = currencyConverter(sek);

			printf("%d SEK = %.2f$\n\n\n", sek, dollar);

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
	




