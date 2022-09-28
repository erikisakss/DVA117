#include <stdio.h>




void pointerFunction(int* test, float* ftest);

int main(void) {
	int test;
	float ftest;
	pointerFunction(&test, &ftest);
	

	printf("%d\n%f", test, ftest);
	

	return 0;
}



void pointerFunction(int* test, float* ftest) {

	*test = 20;
	*ftest = 3.14;

}