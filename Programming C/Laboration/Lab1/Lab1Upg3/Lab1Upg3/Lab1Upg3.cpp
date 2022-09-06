#include <stdio.h>
int main()

{
	float exklusiveMoms, summaMoms, price, momssats;
	int moms;
	//Ber användaren om pris och momssats
		printf("Varans pris: ");
		scanf_s("%f", &price);

		printf("Momssats: ");
		scanf_s("%d", &moms);

	//Bestämmer pris exklusive moms och summan av momsen
		momssats = moms/100.0 + 1;
		exklusiveMoms = price / momssats;
		summaMoms = price - exklusiveMoms;
	
	//Skriver ut nettopriset och summan av momsen
		printf("Nettopris: %.2fkr\nSumma Moms: %.2fkr\n", exklusiveMoms, summaMoms);

		return 0;
}