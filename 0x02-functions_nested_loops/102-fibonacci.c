#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long num1 = 1;
    unsigned long num2 = 2;
    unsigned long nextNum;
    int count;

    printf("%lu, %lu", num1, num2);

    for (count = 2; count < 50; count++)
    {
        nextNum = num1 + num2;
        printf(", %lu", nextNum);
        num1 = num2;
        num2 = nextNum;
    }

    printf("\n");

    return (0);
}
