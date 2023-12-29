#include <stdio.h>

int main() {
    float basicSalary, da, hra, grossSalary;

    // Input basic salary from the user
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate dearness allowance (40% of basic salary)
    da = 0.4 * basicSalary;

    // Calculate house rent allowance (20% of basic salary)
    hra = 0.2 * basicSalary;

    // Calculate gross salary (basic salary + da + hra)
    grossSalary = basicSalary + da + hra;

    // Display the calculated gross salary
    printf("Ramesh's Gross Salary is: %.2f\n", grossSalary);

    return 0;
}
