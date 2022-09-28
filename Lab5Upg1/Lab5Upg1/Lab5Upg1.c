#include <stdio.h>
#include <math.h>

float squareRoot(float* number, float* result);

int main(void) {

	float number, result = 0;
	printf("Enter a number: \n");
	scanf_s("%f", &number);






	squareRoot(&number, &result);

	if (squareRoot(&number, &result) == 1)
	{
		printf("The square root of %.2f is %.2f", number, result);
	}

	else
	{
		printf("It is not possible to calculate the square root of a negative number");
	}




	return 0;

}


float squareRoot(float* number, float* result) {



	if (*number < 0)



		return 0;

	else
	{
		*result = sqrt(*number);
		return 1;
	}


}


