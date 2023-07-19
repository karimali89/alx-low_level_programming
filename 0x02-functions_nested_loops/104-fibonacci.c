#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 * Return: Always 0.
 */
int main(void)
{
    int count;
    unsigned long fib[100] = {0};

    fib[99] = 1; /* Set the last element to 1 to start Fibonacci sequence */

    for (count = 98; count >= 0; count--)
    {
        if (fib[count + 1] > 9999999999)
        {
            fib[count] += fib[count + 1] / 10000000000;
            fib[count + 1] %= 10000000000;
        }

        fib[count] += fib[count + 1];
    }

    for (count = 0; count < 98; count++)
    {
        printf("%lu%010lu, ", fib[count] / 10000000000, fib[count] % 10000000000);
    }

    printf("%lu%010lu\n", fib[98] / 10000000000, fib[98] % 10000000000);

    return (0);
}
