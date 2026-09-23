#include <stdio.h>

int main() {

   double totalRevenue, expenses, balance = 0;
   int departments;
   double payroll, procurement, assets;

   printf("MUNICIPAL BUDGET CALCULATOR\n");
   printf("---------------------------------\n");

    printf("Enter Total Revenue: \n");
    scanf("%lf", &totalRevenue);

    printf("Enter Expenses: \n");
    scanf("%lf", &expenses);

    printf("Enter Number of Departments: \n");
    scanf("%d", &departments);

    printf("Enter Payroll Expenses: \n");
    scanf("%lf", &payroll);

    printf("Enter Procurement Expenses: \n");
    scanf("%lf", &procurement);

    printf("Enter Assets: \n");
    scanf("%lf", &assets);

   balance = totalRevenue - expenses;

   printf("---------------------------------\n");
   printf("MUNICIPAL FINANCIAL SUMMARY:\n");
   printf("---------------------------------\n");
   printf("Number of Departments: %d\n", departments);
   printf("Payroll Expenses: %.2lf\n", payroll);
   printf("Procurement Expenses: %.2lf\n", procurement);
   printf("Assets: %.2lf\n", assets);
   printf("Total Revenue: %.2lf\n", totalRevenue);
   printf("Expenses: %.2lf\n", expenses);
   printf("Balance: %.2lf\n", balance);

    if (balance > 0) {
      printf("Surplus: %.2lf\n", balance);

   } else if (balance < 0) {
      printf("Deficit: %.2lf\n", -balance);

   } else {
      printf("Balanced Budget.\n");
   }

    return 0;
}