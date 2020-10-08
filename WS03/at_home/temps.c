//==============================================
// Name:           Donghyeon Kim
// Student Number: 151613197
// Email:          dkim167@myseneca.ca
// Section:        NSS
// Workshop:       3 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include<stdio.h>
#define NUMS 4
#define UPPER_BOUND 40
#define LOWER_BOUND -40

int main(void) {
	// Temporary variables.
	int high, low, i;

	/* Sum of high temperatures */
	int highSum = 0;

	/* Sum of low temperatures */
	int lowSum = 0;

	/* The overall highest temperature */
	int allTimeHigh = LOWER_BOUND;

	/* The date when temperature reached the highest point */
	int allTimeHighDate = 0;

	/* The overall lowest temperature */
	int allTimeLow = UPPER_BOUND;

	/* The date when temperature reached the lowest point */
	int allTimeLowDate = 0;

	/* Mean of high temperatures */
	double meanHigh = 0;

	/* Mean of low temperatures */
	double meanLow = 0;

	/* Mean temperature */
	double mean = 0;

	printf("---=== IPC Temperature Analyzer ===---\n");

	for (i = 0; i < NUMS; i++) {
		int validInput = 0;

		while (!validInput) {
			// Read high.
			printf("Enter the high value for day %d: ", i + 1);
			scanf("%d", &high);
			printf("\n");

			// Read low.
			printf("Enter the low value for day %d: ", i + 1);
			scanf("%d", &low);
			printf("\n");

			// Validate.
			if (high > UPPER_BOUND || low < LOWER_BOUND || high <= low) {
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
			}
			else {
				validInput = 1;
			}
		}

		highSum += high;
		lowSum += low;

		if (high > allTimeHigh) {
			allTimeHigh = high;
			allTimeHighDate = i + 1;
		}
		if (low < allTimeLow) {
			allTimeLow = low;
			allTimeLowDate = i + 1;
		}
	}

	// Calculate statistics.
	meanLow = lowSum / ((double)NUMS);
	meanHigh = highSum / ((double)NUMS);
	mean = (lowSum + highSum) / 2.0 / ((double)NUMS);

	printf("The average (mean) LOW temperature was: %.2lf\n", meanLow);
	printf("The average (mean) HIGH temperature was: %.2lf\n", meanHigh);
	printf("The average (mean) temperature was: %.2lf\n", mean);
	printf("The highest temperature was %d, on day %d\n", allTimeHigh, allTimeHighDate);
	printf("The lowest temperature was %d, on day %d\n", allTimeLow, allTimeLowDate);

	return 0;
}