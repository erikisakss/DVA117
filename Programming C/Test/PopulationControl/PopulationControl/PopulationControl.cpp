#include <stdio.h>

int main(void)
{

	int befolkning = 9870, year = 1, limit = 30000;

	if (befolkning <= limit) {
		do
		{
			befolkning = befolkning * 1.1;
			year++;
			printf("Year: %d %d\n", year, befolkning);


		} while (befolkning <= limit);

	}
	printf("Year: %d, the population reached its limit", year);
	
	





	return 0;
}