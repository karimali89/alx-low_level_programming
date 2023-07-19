#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for which the times table should be printed
 */
void print_times_table(int n)
{
    int i, j, result;

    if (n >= 0 && n <= 15)
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                result = i * j;

                if (j == 0)
                    printf("%3d", result);
                else
                    printf(", %3d", result);
            }
            putchar('\n');
        }
    }
}

