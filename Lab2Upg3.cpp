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
			//summerar talen och räknar antal gånger loopen kör
			if (tal > 0)
			{
				sum = sum + tal;
				amount++; 
				
			}
			//räknar ut maxvärdet
			if (maxTal < tal)
			{
				maxTal = tal;
				
			}
			//räknar ut minvärdet
			if (minTal == -10 || minTal > tal && tal > 0)
			{
				minTal = tal;
				
			}
		}
		//räknar ut medelvärdet
		medelTal = (float)sum / amount;

		//Clearar terminalen och printar ut resultatet, frågar sedan om man vill köra uträknaren igen
		void clrscr();
		{
			system("@cls||clear");
		}

		printf("Summa: %d\n", sum);
		printf("Maxtal: %d\n", maxTal);
		printf("Mintal: %d\n", minTal);
		printf("Medelvärde: %.2f\n\n", medelTal);
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