#include <stdio.h>

int main() {

    char supplierName[50];
    float price;
    float budget;
    int registered;
    int documentsComplete;

    printf("Enter Supplier name: \n");
    scanf("%49[^\n]", supplierName);

    printf("Enter Price: \n");
    scanf("%f", &price);

    printf("Enter Budget: \n");
    scanf("%f", &budget);

    printf("Is supplier registered? (1 = Yes, 0 = No): \n");
    scanf("%d", &registered);

    printf("Are all documents complete? (1 = Yes, 0 = No): \n");
    scanf("%d", &documentsComplete);

    if (registered == 1 && documentsComplete == 1 && price <= budget) {
        printf("Qualified Supplier\n");
    } else {
        printf("Disqualified Supplier\n");
    }

    return 0;
}