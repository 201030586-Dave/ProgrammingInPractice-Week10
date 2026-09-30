#include <stdio.h>
#include "employees.h"

void addEmployee(void)
{
    printf("Adding employee...\n");
}

void listEmployees(void)
{
    printf("Listing employees...\n");
}

double calculatePayrollTotal(void)
{
    return 0.0;
}

void saveEmployees(void)
{
    FILE *fp;

    fp = fopen("data/employees.txt", "w");

    if (fp == NULL)
    {
        perror("data/employees.txt");
        return;
    }

    fprintf(fp, "%d %s %.2f\n", 1001, "Maria", 18500.50);
    fprintf(fp, "%d %s %.2f\n", 1002, "Simon", 17200.00);

    fclose(fp);

    printf("Employees saved successfully.\n");
}

void loadEmployees(void)
{
    FILE *fp;
    int id;
    char name[50];
    double salary;

    fp = fopen("data/employees.txt", "r");

    if (fp == NULL)
    {
        perror("data/employees.txt");
        return;
    }

    printf("\n--- EMPLOYEES FROM FILE ---\n");

    while (fscanf(fp, "%d %49s %lf", &id, name, &salary) == 3)
    {
        printf("%d %s %.2f\n", id, name, salary);
    }

    fclose(fp);
}