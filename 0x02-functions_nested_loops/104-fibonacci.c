#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num1 = 1, num2 = 2, nextNum;
	int i;

	printf("%lu, %lu", num1, num2);

	for (i = 2; i < 98; i++)
	{
		nextNum = num1 + num2;
		printf(", %lu", nextNum);
		num1 = num2;
		num2 = nextNum;
	}

	printf("\n");

	return (0);
}
