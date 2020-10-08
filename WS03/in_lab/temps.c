//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Workshop:       3 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include<stdio.h>
#define NUMS 3

int main(void) {
	int high, lo, sum, i;

	printf("---=== IPC Temperature Analyzer ===---\n");

	sum = 0;
	for (i = 0; i < NUMS; i++) {
		int validInput = 0;

		while (!validInput) {
			// Read high.
			printf("Enter the high value for day %d: ", i + 1);
			scanf("%d", &high);
			printf("\n");

			// Read low.
			printf("Enter the low value for day %d: ", i + 1);
			scanf("%d", &lo);
			printf("\n");

			// Validate.
			if (high >= 41 || lo <= -41 || high <= lo) {
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
			}
			else {
				validInput = 1;
			}
		}

		sum += high + lo;
	}

	// Report average.
	printf("The average (mean) temperature was: %.2lf\n", sum / 2.0 / ((double)NUMS));

	return 0;
}