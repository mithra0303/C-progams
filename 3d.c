#include <stdio.h>

int calculateDayOfWeek(int year) {
    int day, month = 1; // January
    if (month <= 2) {
        month += 12;
        year--;
    }
    int century = year / 100;
    year = year % 100;

    day = (1 + 13 * (month + 1) / 5 + year + year / 4 + century / 4 - 2 * century) % 7;

    // Adjust result to match day conventions (0-Saturday, 1-Sunday, ..., 6-Friday)
    return (day + 5) % 7;
}

int main() {
    // Declare variable
    int year;

    // Input a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the input year is valid
    if (year >= 1) {
        int dayOfWeek = calculateDayOfWeek(year);

        // Display the day of the week for January 1st of the given year
        switch (dayOfWeek) {
            case 0:
                printf("January 1, %d is a Saturday.\n", year);
                break;
            case 1:
                printf("January 1, %d is a Sunday.\n", year);
                break;
            case 2:
                printf("January 1, %d is a Monday.\n", year);
                break;
            case 3:
                printf("January 1, %d is a Tuesday.\n", year);
                break;
            case 4:
                printf("January 1, %d is a Wednesday.\n", year);
                break;
            case 5:
                printf("January 1, %d is a Thursday.\n", year);
                break;
            case 6:
                printf("January 1, %d is a Friday.\n", year);
                break;
        }
    } else {
        printf("Invalid input. Please enter a valid year.\n");
    }

    return 0;
}
