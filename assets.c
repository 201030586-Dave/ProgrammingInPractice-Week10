#include <stdio.h>
#include "assets.h"

void saveAssets(void)
{
    FILE *fp;

    fp = fopen("data/assets.txt", "w");

    if (fp == NULL)
    {
        perror("data/assets.txt");
        return;
    }

    fprintf(fp, "%d %s %.2f\n", 3001, "ATM", 85000.00);
    fprintf(fp, "%d %s %.2f\n", 3002, "Printer", 12500.00);

    fclose(fp);

    printf("Assets saved successfully.\n");
}

void loadAssets(void)
{
    FILE *fp;
    int id;
    char name[50];
    double value;

    fp = fopen("data/assets.txt", "r");

    if (fp == NULL)
    {
        perror("data/assets.txt");
        return;
    }

    printf("\n--- ASSETS FROM FILE ---\n");

    while (fscanf(fp, "%d %49s %lf", &id, name, &value) == 3)
    {
        printf("%d %s %.2f\n", id, name, value);
    }

    fclose(fp);
}