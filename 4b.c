#include <stdio.h>

int main() {
    char inputChar;

    // Input character from the user
    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    // Check the ASCII value range to determine the type of character
    if ((inputChar >= 'A' && inputChar <= 'Z') || (inputChar >= 'a' && inputChar <= 'z')) {
        printf("The entered character is a letter.\n");

        if (inputChar >= 'A' && inputChar <= 'Z') {
            printf("It is a capital letter.\n");
        } else {
            printf("It is a small case letter.\n");
        }
    } else if (inputChar >= '0' && inputChar <= '9') {
        printf("The entered character is a digit.\n");
    } else if ((inputChar >= 0 && inputChar <= 47) || (inputChar >= 58 && inputChar <= 64) || 
               (inputChar >= 91 && inputChar <= 96) || (inputChar >= 123 && inputChar <= 127)) {
        printf("The entered character is a special symbol.\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
