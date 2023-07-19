#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers.
 */
void print_fibonacci(void)
{
    int i;
    unsigned long int prev = 1, current = 2, next;
    char separator[] = ", ";

    printf("%lu, %lu", prev, current); /* Print the first two numbers */

    for (i = 3; i <= 98; i++)
    {
        next = prev + current;
        printf("%s%lu", separator, next);
        prev = current;
        current = next;
    }

    printf("\n");
}
