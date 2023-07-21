#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum = 0;
	int count = 0;

	while (count < 98)
	{
		printf("%lu", sum);
		if (count < 97)
			printf(", ");

		fib1 = fib2;
		fib2 = sum;
		sum = fib1 + fib2;
		count++;
	}

	printf("\n");
	return (0);
}
