#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci terms below 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long nextNum;
	unsigned long sum = 2; /* Start with 2 to account for the second term (2) */

	while (1)
	{
		nextNum = num1 + num2;
		if (nextNum > 4000000)
			break;
		if (nextNum % 2 == 0)
			sum += nextNum;
		num1 = num2;
		num2 = nextNum;
	}

	printf("%lu\n", sum);

	return (0);
}
