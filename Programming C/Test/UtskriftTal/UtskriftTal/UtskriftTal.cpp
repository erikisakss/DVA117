#include <stdio.h>

int main(void)
{
	int tal = 0, ental = -1, tiotal = -1, hundratal = -1, tusental = -1;

	printf("Ange ett tal: ");
	scanf_s("%d", &tal);

	if (tal < 0 || tal > 9999)
		printf("Felaktigt tal");


	else {

		ental = tal % 10;
		tal = tal / 10;

		if (tal > 0)
		{

			tiotal = tal % 10;
			tal = tal / 10;
		}
		if (tal > 0)
		{
			hundratal = tal % 10;
			tal = tal / 10;
		}
		if (tal > 0)
		{
			tusental = tal;
		}

		switch (tusental)
		{
		case 1: printf("ettusen "); break;
		case 2: printf("tvåtusen "); break;
		case 3: printf("tretusen "); break;
		case 4: printf("fyratusen "); break;
		case 5: printf("femtusen "); break;
		case 6: printf("sextusen "); break;
		case 7: printf("sjutusen "); break;
		case 8: printf("åttatusen "); break;
		case 9: printf("niotusen "); break;


		}

		switch (hundratal)
		{
		case 1: printf("etthundra "); break;
		case 2: printf("tvåhundra "); break;
		case 3: printf("trehundra "); break;
		case 4: printf("fyrahundra "); break;
		case 5: printf("femhundra "); break;
		case 6: printf("sexhundra "); break;
		case 7: printf("sjuhundra "); break;
		case 8: printf("åttahundra "); break;
		case 9: printf("niohundra "); break;


		}

		switch (tiotal)
		{
		case 1: printf("tio "); break;
		case 2: printf("tjugo "); break;
		case 3: printf("trettio "); break;
		case 4: printf("fyrtio "); break;
		case 5: printf("femtio "); break;
		case 6: printf("sextio "); break;
		case 7: printf("sjuttio "); break;
		case 8: printf("åttio "); break;
		case 9: printf("nittio "); break;


		}

		switch (ental)
		{
		case 1: printf("ett "); break;
		case 2: printf("två "); break;
		case 3: printf("tre "); break;
		case 4: printf("fyra "); break;
		case 5: printf("fem "); break;
		case 6: printf("sex "); break;
		case 7: printf("sju "); break;
		case 8: printf("åtta "); break;
		case 9: printf("nio "); break;


		}
	}







	return 0;
}