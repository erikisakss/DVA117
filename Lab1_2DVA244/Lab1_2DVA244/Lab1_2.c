#include <stdio.h>
#include <assert.h>
int sum(int number) {

	int summa = number;

	printf("sum(%d) anropas\n", number);
	if (number <= 0)
	{
		printf("sum(%d) returned: 0\n", number);
		return 0;
	}

	if (number == 1)
	{
		printf("sum(%d) returned: %d\n", number, summa);
		return 1;
	}

	summa = number + sum(number - 1);



	printf("sum(%d) returned: %d\n", number, summa);
	return summa;



}




int main(void) {

	assert(sum(1) == 1);
	assert(sum(2) == 3);
	assert(sum(3) == 6);
	assert(sum(4) == 10);
	assert(sum(5) == 15);
	assert(sum(20) == 210);
	assert(sum(0) == 0);
	assert(sum(-1) == 0);




	return 0;
}



