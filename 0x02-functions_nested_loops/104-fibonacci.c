#include <stdio.h>

#define MAX_DIGITS 1000

/**
 * print_array - Prints an array of integers as a single number
 * @arr: The array of integers
 * @size: The size of the array
 */
void print_array(int *arr, int size)
{
	int i;

	for (i = size - 1; i >= 0; i--)
		printf("%d", arr[i]);
}

/**
 * fibonacci_sum_even - Computes the sum of even Fibonacci numbers
 *                     whose values do not exceed 4,000,000
 *
 * Return: The sum of even Fibonacci numbers
 */
unsigned long int fibonacci_sum_even(void)
{
	int fib1[MAX_DIGITS] = {0};
	int fib2[MAX_DIGITS] = {0};
	int temp[MAX_DIGITS] = {0};
	int i, carry, sum, even_sum;
	unsigned long int total_sum = 0;

	fib1[0] = 1;
	fib2[0] = 2;

	while (1)
	{
		even_sum = fib2[0] % 2 == 0 ? fib2[0] : 0;

		for (i = 0, carry = 0; i < MAX_DIGITS; i++)
		{
			sum = fib1[i] + fib2[i] + carry;
			carry = sum / 10;
			temp[i] = sum % 10;
		}

		if (fib2[0] >= 4000000)
			break;

		total_sum += even_sum;

		for (i = 0; i < MAX_DIGITS; i++)
		{
			fib1[i] = fib2[i];
			fib2[i] = temp[i];
		}
	}

	return (total_sum);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int sum;

	sum = fibonacci_sum_even();
	printf("%lu\n", sum);

	return (0);
}
