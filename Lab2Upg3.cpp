#include<stdio.h>
#include<stdlib.h>
	int main(void)
{
	
	int runAgain = 1;
	do
	{
		int tal = 0, amount = 0, sum = 0, maxTal = -1, minTal = -10;
		float medelTal;
		while (tal >= 0)
		{
			printf("Enter a number: ");
			scanf_s("%d", &tal);
			//summerar talen och r�knar antal g�nger loopen k�r
			if (tal > 0)
			{
				sum = sum + tal;
				amount++; 
				
			}
			//r�knar ut maxv�rdet
			if (maxTal < tal)
			{
				maxTal = tal;
				
			}
			//r�knar ut minv�rdet
			if (minTal == -10 || minTal > tal && tal > 0)
			{
				minTal = tal;
				
			}
		}
		//r�knar ut medelv�rdet
		medelTal = (float)sum / amount;

		//Clearar terminalen och printar ut resultatet, fr�gar sedan om man vill k�ra utr�knaren igen
		void clrscr();
		{
			system("@cls||clear");
		}

		printf("Summa: %d\n", sum);
		printf("Maxtal: %d\n", maxTal);
		printf("Mintal: %d\n", minTal);
		printf("Medelv�rde: %.2f\n\n", medelTal);
		printf("Do you want to run the calculator again? 1 = Yes, 0 = No: \n");

		scanf_s("%d", &runAgain);
		

		while (runAgain < 0 || runAgain > 1)
		{
			printf("Invalid Answer, 1 = Yes, 0 = No: \n\n");
			scanf_s("%d", &runAgain);
		}

		void clrscr();
		{
			system("@cls||clear");
		}

	} while (runAgain == 1);

	system("pause");

	return 0;
}