#include <stdio.h>
#include <stdlib.h>
#include<curl/curl.h>




float currencyConverter(float sek)
{

	float dollarValue = sek / 10.7;


	return dollarValue;


}



int main(void)
{

	int sek;
	float dollar;

	printf("SEK to $ Converter\n\n");
	printf("Enter how many SEK you want to conver to $: ");
	scanf_s("%d", &sek);

	dollar = currencyConverter(sek);

	printf("%d SEK = %.2f$", sek, dollar);

	return 0;
}



