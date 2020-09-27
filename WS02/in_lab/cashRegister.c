//==============================================
// Name:           Donghyeon Kim
// Student Number: 151613197
// Email:          dkim167@myseneca.ca
// Section:        NSS
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:

#include<stdio.h>

int main(void) {
	double balance = 0.0;
	int loonies = 0;
	int quarters = 0;

	// Read user input.
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &balance);

	// Count loonies.
	loonies = (int)balance;
	balance -= loonies;
	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, balance);

	// Count quarters.
	quarters = (int)(balance / 0.25);
	balance -= quarters * 0.25;
	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, balance);

	return 0;
}
