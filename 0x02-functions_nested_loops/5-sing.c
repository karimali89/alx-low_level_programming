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
	else
	}
}

int main (void)
{
	int number;

	printf("Enter a anumber:");
	scanf("%d", &number);

	int result = print_sing(number);
	putchar("\n");
	printf("Returned value: "%d\n", result);

	return (0);
}
