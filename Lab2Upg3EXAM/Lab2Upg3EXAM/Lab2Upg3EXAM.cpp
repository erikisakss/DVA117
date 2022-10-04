#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	int runAgain = 1;
	do
	{
		//EXAMINATION Ny array
		int tal = 0, talArray[10], amount = 0, sum = 0, maxTal = 0, minTal = 0, i;
		float medelTal = 0;
		//EXAMINATION (Gäller hela for-loopen)
			for (i = 0; i < 10; i++)
			{
				printf("Enter a number(Max 9 heltal, avsluta med negativt): ");
				scanf_s("%d", &tal);
				
			
				talArray[i] = tal;
				if (talArray[9] > 0)
				{
					talArray[9] = -1;
				}
				
				if (talArray[i] < 0)
				{
					break;
				}
			}

			//EXAMINATION (Gäller hela for-loopen)
			for (i = 0; i < 10; i++)
			{

				if (talArray[i] < 0)
				{
					continue;
				}


				if (talArray[i] >= 0)
				{
					sum = sum + talArray[i];
					amount++;
				}
				if (maxTal < talArray[i])
				{
					maxTal = talArray[i];

				}

				if (minTal == 0 || minTal > talArray[i])
				{
					minTal = talArray[i];

				}

				
			
			
			}
		
		medelTal = (float)sum / amount;

	
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

		//K�r igen
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