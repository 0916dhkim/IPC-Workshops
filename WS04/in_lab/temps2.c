//==============================================
// Name:           Donghyeon Kim
// Student Number: 151613197
// Email:          dkim167@myseneca.ca
// Section:        NSS
// Workshop:       4 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include<stdio.h>

#define MIN_DAYS 3
#define MAX_DAYS 10

int main(void) {
    int num_days = 0;
    int high_temps[MAX_DAYS] = { 0 };
    int low_temps[MAX_DAYS] = { 0 };
    int i;

    printf("---=== IPC Temperature Calculator V2.0 ===---\n");

    // Read number of days.
    printf("Please enter the number of days, between 3 and 10, inclusive: ");
    scanf("%d", &num_days);
    printf("\n");

    while (num_days < MIN_DAYS || num_days > MAX_DAYS) {
        printf(
            "Invalid entry, please enter a number between %d and %d, inclusive: ",
            MIN_DAYS,
            MAX_DAYS
        );
        scanf("%d", &num_days);
        printf("\n");
    }

    // Read temperatures.
    for (i = 0; i < num_days; i++) {
        printf("Day %d - High: ", i + 1);
        scanf("%d", &(high_temps[i]));
        printf("Day %d - Low: ", i + 1);
        scanf("%d", &(low_temps[i]));
    }
    printf("\n");

    // Print temperatures.
    printf("Day  Hi  Low\n");
    for (i = 0; i < num_days; i++) {
        printf("%-5d%-5d%-5d\n", i + 1, high_temps[i], low_temps[i]);
    }

    return 0;
}

