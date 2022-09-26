#include <stdio.h>

int main(void)

{
	int bertil[10];
	int bertil2[10];

	for (int i = 0; i < 10; i++) {

		scanf_s("%d", &bertil[i]);
		bertil2[i] = bertil[i];
	}
	printf("%d", bertil2[3]);




	return 0;
}