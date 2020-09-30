//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Workshop:       2 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Paste your in-lab code below and upgrade it to the at-home specifications
#include<stdio.h>
int main(void) {
    double userInput = 0.0;
    int balanceCents = 0;
    double GST = 0.0;
    int loonies = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    // Read user input.
    printf("Please enter the amount to be paid: $");
    scanf("%lf", &userInput);
    balanceCents = (int)(userInput * 100);

    // Calculate GST.
    GST = balanceCents / 100.0 * .13 + 0.005;
    balanceCents += (int)(GST * 100);

    printf("GST: %.2lf\n", GST);
    printf("Balance owing: $%.2lf\n", (float)balanceCents/100);

    // Count loonies.
    loonies = balanceCents / 100;
    balanceCents -= loonies * 100;
    printf("Loonies required: %d, balance owing $%.2lf\n", loonies, (float)balanceCents / 100);

    // Count quarters.
    quarters = balanceCents / 25;
    balanceCents -= quarters * 25;
    printf("Quarters required: %d, balance owing $%.2lf\n", quarters, (float)balanceCents / 100);

    // Count dimes.
    dimes = balanceCents / 10;
    balanceCents -= dimes * 10;
    printf("Dimes required: %d, balance owing $%.2lf\n", dimes, (float)balanceCents / 100);

    // Count nickels.
    nickels = balanceCents / 5;
    balanceCents -= nickels * 5;
    printf("Nickels required: %d, balance owing $%.2lf\n", nickels, (float)balanceCents / 100);

    // Count pennies.
    pennies = balanceCents;
    balanceCents -= pennies;
    printf("Pennies required: %d, balance owing $%.2lf\n", pennies, (float)balanceCents / 100);

    return 0;
}
