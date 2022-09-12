#include <stdio.h>


int asterix(int width,int height)
{
	char asterix = '*';
	int top = width * asterix, bot = height *asterix;
	printf("%c", top);



	return top;
}



int main(void)
{
	int width;
	int height;

	printf("Enter the width of the triangle in CM: \n");
	scanf_s("%d", &width);
	printf("Enter the height of the triangle in CM: \n");
	scanf_s("%d", &height);

	printf("%d", asterix(width));

	return 0;
}