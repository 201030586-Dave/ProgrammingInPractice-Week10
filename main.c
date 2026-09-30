#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"
#include "suppliers.h"
#include "assets.h"

int main(void)
{
    int choice;

    printf("Municipal Financial Management System\n");

    do
    {
        printf("\n");
        printf("1. Employees\n");
        printf("2. Budget\n");
        printf("3. Reports\n");
        printf("4. Save Data\n");
        printf("5. Load Data\n");
        printf("6. Save Suppliers\n");
        printf("7. Load Suppliers\n");
        printf("8. Save Assets\n");
        printf("9. Load Assets\n");
        printf("10. Save Budgets\n");
        printf("11. Load Budgets\n");
        printf("12. Exit\n");
        printf("Enter choice: ");

        choice = readInt();

        if (choice == 1)
        {
            addEmployee();
            listEmployees();
        }
        else if (choice == 2)
        {
            addBudget();
        }
        else if (choice == 3)
        {
            employeeReport();
            budgetReport();
        }
        else if (choice == 4)
        {
            saveEmployees();
        }
        else if (choice == 5)
        {
            loadEmployees();
        }
        else if (choice == 6)
        {
            saveSuppliers();
        }
        else if (choice == 7)
        {
            loadSuppliers();
        }
        else if (choice == 8)
        {
            saveAssets();
        }
        else if (choice == 9)
        {
            loadAssets();
        }
        else if (choice == 10)
        {
            saveBudgets();
        }
        else if (choice == 11)
        {
            loadBudgets();
        }
        else if (choice == 12)
        {
            printf("Goodbye.\n");
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 12);

    return 0;
}