#include <stdio.h>
#include "budget.h"

void addBudget(void)
{
    printf("Adding budget...\n");
}

double calculateBudgetBalance(double revenue, double expenses)
{
    return revenue - expenses;
}

void saveBudgets(void)
{
    FILE *fp;

    fp = fopen("data/budgets.txt", "w");

    if (fp == NULL)
    {
        perror("data/budgets.txt");
        return;
    }

    fprintf(fp, "%d %.2f %.2f\n", 4001, 250000.00, 175000.00);
    fprintf(fp, "%d %.2f %.2f\n", 4002, 180000.00, 120000.00);

    fclose(fp);

    printf("Budgets saved successfully.\n");
}

void loadBudgets(void)
{
    FILE *fp;
    int id;
    double revenue;
    double expenses;

    fp = fopen("data/budgets.txt", "r");

    if (fp == NULL)
    {
        perror("data/budgets.txt");
        return;
    }

    printf("\n--- BUDGETS FROM FILE ---\n");

    while (fscanf(fp, "%d %lf %lf", &id, &revenue, &expenses) == 3)
    {
        printf("%d %.2f %.2f\n", id, revenue, expenses);
    }

    fclose(fp);
}