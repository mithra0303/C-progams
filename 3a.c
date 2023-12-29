#include <stdio.h>

int main() {
    // Declare variables
    float costPrice, sellingPrice, profitLoss;

    // Input cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    profitLoss = sellingPrice - costPrice;

    // Determine and display the result
    if (profitLoss > 0) {
        printf("Profit of Rs. %.2f\n", profitLoss);
    } else if (profitLoss < 0) {
        printf("Loss of Rs. %.2f\n", -profitLoss);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}
