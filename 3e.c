#include <stdio.h>

int main() {
    // Declare variables
    int originalNumber, reversedNumber = 0, temp;

    // Input a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &originalNumber);

    // Check if the entered number is a five-digit number
    if (originalNumber < 10000 || originalNumber > 99999) {
        printf("Invalid input. Please enter a five-digit number.\n");
        return 1; // Exit with an error code
    }

    // Reverse the number
    temp = originalNumber;
    while (temp > 0) {
        reversedNumber = reversedNumber * 10 + temp % 10; // Build the reversed number
        temp /= 10; // Remove the last digit
    }

    // Determine if the original and reversed numbers are equal
    if (originalNumber == reversedNumber) {
        printf("The original and reversed numbers are equal.\n");
    } else {
        printf("The original and reversed numbers are not equal.\n");
    }

    return 0;
}
