#include <stdio.h>

/**
 * main - Entry point of the program, prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long int fib1 = 1, fib2 = 2, next_fib;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		next_fib = fib1 + fib2;
		printf(", %lu", next_fib);

		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");

	return (0);
}
