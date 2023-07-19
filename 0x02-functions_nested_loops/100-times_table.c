#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of rows and columns in the table
 */
void print_times_table(int n)
{
	int row, col, result;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			result = row * col;
			if (col == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}

