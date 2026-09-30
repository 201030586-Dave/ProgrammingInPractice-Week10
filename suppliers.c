#include <stdio.h>
#include "suppliers.h"

void saveSuppliers(void)
{
    FILE *fp;

    fp = fopen("data/suppliers.txt", "w");

    if (fp == NULL)
    {
        perror("data/suppliers.txt");
        return;
    }

    fprintf(fp, "%d %s %s\n", 2001, "ABC_Supplies", "Windhoek");
    fprintf(fp, "%d %s %s\n", 2002, "Nam_Stationery", "Oshakati");

    fclose(fp);

    printf("Suppliers saved successfully.\n");
}

void loadSuppliers(void)
{
    FILE *fp;
    int id;
    char name[50];
    char town[50];

    fp = fopen("data/suppliers.txt", "r");

    if (fp == NULL)
    {
        perror("data/suppliers.txt");
        return;
    }

    printf("\n--- SUPPLIERS FROM FILE ---\n");

    while (fscanf(fp, "%d %49s %49s", &id, name, town) == 3)
    {
        printf("%d %s %s\n", id, name, town);
    }

    fclose(fp);
}