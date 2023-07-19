#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The input number.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		_putchar('0' + 8); /* Last digit of INT_MIN is 8 */
		return (8);
	}

	if (n < 0)
		n = -n;
	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}

