#include <stdio.h>

int main() {
    float salaries[50];
    float budgets[10];
    char registrations[20][20];
    float total;
    float highestSalary = salaries[0];
    float lowestSalary = salaries[0];
    float averageSalary;
    float search;
    int choice;

    for (int i = 0; i < 4; i++) {
        printf("Enter Salary %d:", i + 1);
        scanf("%f", &salaries[i]);

        total += salaries[i];
        if (i == 0) {
            highestSalary = salaries[0];
            lowestSalary = salaries[0];
        }

        if (highestSalary < salaries[i]) {
            highestSalary = salaries[i];
        }
        if (lowestSalary > salaries[i]) {
            lowestSalary = salaries[i];
        }
    }

    printf("=======Salary Options=======\n");
    printf("1. Display All Salaries\n");
    printf("2. Salary Analysis\n");
    printf("3. Search Salary\n");
    printf("===========================\n");
    printf("Select Options: \n");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
          for (int i = 0; i < 4; i++) {
              printf("Salary %d: %.2f\n", i + 1, salaries[i]);
          }
          break;
        case 2:
          averageSalary = total /  4;
          printf("Average Salary: %.2f\n", averageSalary);
          printf("Highest: %.2f\n", highestSalary);
          printf("Lowest: %.2f\n", lowestSalary);
          break;
        
         
        case 3: 
          int found = 0;

          printf("Search Salary: ");
          scanf("%f", &search);

          for (int i = 0; i < 4; i++) {
               if (salaries[i] == search) {
                  printf("Salary %d found: %.2f\n",
                   i + 1, salaries[i]);
                  found = 1;
                 break;
               }
          }

          if (found == 0) {
              printf("Salary Not Found!!!!!\n");
            }

           break;
     

       default:
           printf("Invalid Choice");
  
    } 


    return 0;
}