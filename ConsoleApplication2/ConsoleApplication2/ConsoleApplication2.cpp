#include <stdio.h>

int loudFan(int) {


	return 1;
}

void beQuiet() {


}


int main(void) {
	int fanIsLoud = 0;
	fanIsLoud = loudFan(fanIsLoud);




	if (fanIsLoud == 1)
	{
		beQuiet();
	}
	


	return 0;
}