//==============================================
// Name:           Donghyeon Kim
// Student Number: 151613197
// Email:          dkim167@myseneca.ca
// Section:        NSS
// Workshop:       4 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Place your code below
#include<stdio.h>
#include<limits.h>

#define MIN_DAYS 3
#define MAX_DAYS 10

int main(void) {
    int num_days = 0;
    int high_temps[MAX_DAYS] = { 0 };
    int low_temps[MAX_DAYS] = { 0 };
    int i;
    int highest_temp = INT_MIN;
    int highest_temp_date = 0;
    int lowest_temp = INT_MAX;
    int lowest_temp_date = 0;

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

        if (high_temps[i] > highest_temp) {
            highest_temp = high_temps[i];
            highest_temp_date = i + 1;
        }
        if (low_temps[i] < lowest_temp) {
            lowest_temp = low_temps[i];
            lowest_temp_date = i + 1;
        }
    }
    printf("\n");

    // Print temperatures.
    printf("Day  Hi  Low\n");
    for (i = 0; i < num_days; i++) {
        printf("%-5d%-5d%-5d\n\n", i + 1, high_temps[i], low_temps[i]);
    }

    // Print the highest and the lowest.
    printf("The highest temperature was %d, on day %d\n", highest_temp, highest_temp_date);
    printf("The lowest temperature was %d, on day %d\n\n", lowest_temp, lowest_temp_date);

    int target_days = 0;
    int temp_sum = 0;
    while (1) {
        printf("Enter a number between 1 and %d ", num_days);
        printf("to see the average temperature for the entered number of days, ");
        printf("enter a negative number to exit: ");
        scanf("%d", &target_days);
        printf("\n");

        if (target_days < 0) {
            break;
        }
        while (target_days < 1 || target_days > num_days) {
            printf("Invalid entry, please enter a number ");
            printf("between 1 and %d, inclusive: ", num_days);
            scanf("%d", &target_days);
            printf("\n");
        }

        // Calculate the average.
        temp_sum = 0;
        for (i = 0; i < target_days; i++) {
            temp_sum += high_temps[i] + low_temps[i];
        }
        printf(
            "The average temperature up to day %d is %.2lf\n\n",
            target_days,
            ((double)temp_sum) / 2.0 / ((double)target_days)
        );
    }

    // End.
    printf("Goodbye!\n");
    return 0;
}

