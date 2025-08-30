/*Write a C program to input basic salary of an employee and calculate its gross salary according to following.(Using if else ladder)
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
#include <stdio.h>

int main() {
    float basicSalary, hra, da, grossSalary;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on basic salary using if-else ladder
    if (basicSalary <= 10000) {
        hra = 0.20 * basicSalary;  // HRA = 20%
        da = 0.80 * basicSalary;   // DA = 80%
    }
    else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;  // HRA = 25%
        da = 0.90 * basicSalary;   // DA = 90%
    }
    else {
        hra = 0.30 * basicSalary;  // HRA = 30%
        da = 0.95 * basicSalary;   // DA = 95%
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Output result
    printf("Gross Salary = %.2f\n", grossSalary);

    return 0;
}

