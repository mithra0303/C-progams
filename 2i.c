#include <stdio.h>

int main() {
    // Declare variables
    int N, notes100, notes50, notes10, notes5, notes2, notes1;

    // Input the sum of money (Rs. N)
    printf("Enter the sum of money (Rs. N): ");
    scanf("%d", &N);

    // Calculate the number of each denomination
    notes100 = N / 100;
    N %= 100;

    notes50 = N / 50;
    N %= 50;

    notes10 = N / 10;
    N %= 10;

    notes5 = N / 5;
    N %= 5;

    notes2 = N / 2;
    N %= 2;

    notes1 = N;

    // Display the result
    printf("Number of Rs. 100 notes: %d\n", notes100);
    printf("Number of Rs. 50 notes: %d\n", notes50);
    printf("Number of Rs. 10 notes: %d\n", notes10);
    printf("Number of Rs. 5 notes: %d\n", notes5);
    printf("Number of Rs. 2 notes: %d\n", notes2);
    printf("Number of Re. 1 notes: %d\n", notes1);

    return 0;
}
