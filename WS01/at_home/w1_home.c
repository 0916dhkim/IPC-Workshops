#include <stdio.h>

void printStars(int count) {
	int i;
	for (i=0; i<count; i++) {
		printf("*");
	}
}

int main(void) {
	int lineWidth = 32;
	printStars(lineWidth);
	printf("\n*** Welcome to C Programming ***\n");
	printStars(lineWidth);
	printf("\n");

	return 0;
}
