#include <stdio.h>
#include "utilities.h"

int readInt(void)
{
    int value;

    scanf("%d", &value);

    return value;
}

double readDouble(void)
{
    double value;

    scanf("%lf", &value);

    return value;
}

void pauseScreen(void)
{
    printf("Press Enter to continue...");
    getchar();
    getchar();
}