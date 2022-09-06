#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int befolkning, year = 2022, limit;
	float increase, increaseValue;

	printf("Enter current population: ");
	scanf_s("%d", &befolkning);

	printf("Enter population reach goal: ");
	scanf_s("%d", &limit);

	printf("Enter yearly increase: ");
	scanf_s("%f", &increase);


	increaseValue = increase / 100 + 1;

	if (befolkning < limit)
	{
		do
		{
			befolkning = befolkning * increaseValue;
			year++;
			printf("Year %d: %d\n", year, befolkning);


		} while (befolkning < limit);
	}
	printf("Year %d the population reached its limit\n", year);

	









	system("pause");
	return 0;
}