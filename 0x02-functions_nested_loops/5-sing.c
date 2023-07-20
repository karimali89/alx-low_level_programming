#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *        -1 and prints - if n is less than zero.
 */

int print_sing(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}


int main(void)
{
	int number;
	int result; /* Declare result here */

	printf("Enter a number: ");
	scanf("%d", &number);

	result = print_sing(number); /* Assign value to result here */
	putchar('\n');
	printf("Returned value: %d\n", result);

	return (0);
}
