#include <stdio.h>

int main(void)
{

	int angle;

	printf("Ange en vinkel: ");
	scanf_s("%d", &angle);



	if (angle < 90 && angle > 0) {

		printf("Vinkeln �r spetsig");

	}

	else if (angle > 90 && angle < 180) {


		printf("Vinkeln �r trubbig");
	}

	else if (angle >= 180 || angle <= 0) {


		printf("Felaktig vinkel");

	}

	else {


		printf("Triangeln har en r�t vinkel");
	}






	return 0;
}