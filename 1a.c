#include <stdio.h>

int main() {
    float basicSalary, da, hra, grossSalary;


    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basicSalary);

    
    da = 0.4 * basicSalary;

    
    hra = 0.2 * basicSalary;

    
    grossSalary = basicSalary + da + hra;

    
    printf("Ramesh's Gross Salary is: %.2f\n", grossSalary);

    return 0;
}
