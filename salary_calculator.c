#include <stdio.h>

int main() {

    float basicSalary, housingAllowance, transportAllowance, tax;
    float grossSalary, netSalary;

    printf("Salary Calculator\n");

    printf("Enter Basic Salary: \n");
    scanf("%f", &basicSalary);

    printf("Enter Housing Allowance: \n");
    scanf("%f", &housingAllowance);

    printf("Enter Transport Allowance: \n");
    scanf("%f", &transportAllowance);

    printf("Enter Tax: \n");
    scanf("%f", &tax);

    grossSalary = basicSalary + housingAllowance + transportAllowance;
    netSalary = grossSalary - tax;

    printf("\n---------------------------------\n");
    printf("Salary Summary:\n"); 
    printf("---------------------------------\n");
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);

    if (netSalary > 20000) {
        printf("High Income\n");
    } else {
        printf("Standard Income\n");
    }

    return 0;
    
}