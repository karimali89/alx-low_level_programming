#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	long int fib1 = 1, fib2 = 2, next_fib;

	printf("%ld, %ld", fib1, fib2);

	for (count = 2; count < 50; count++)
	{
		next_fib = fib1 + fib2;
		printf(", %ld", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");

	return (0);
}

