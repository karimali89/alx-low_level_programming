#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int nextNum;
	int count;

	printf("%d, %d", num1, num2);

	for (count = 2; count < 50; count++)
	{
		nextNum = num1 + num2;
		printf(", %d", nextNum);
		num1 = num2;
		num2 = nextNum;
	}

	printf("\n");

	return (0);
}
