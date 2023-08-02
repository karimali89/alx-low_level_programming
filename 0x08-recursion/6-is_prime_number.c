#include "main.h"

int actual_prime(int n, int i);

/**
 * is_divisible - Helper function to check if a number is divisible by any integer.
 * @n: The number to check.
 * @divisor: The current divisor being checked.
 * Return: 1 if n is divisible by divisor, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
    if (divisor >= n) // Base case: If the divisor exceeds n, the number is not divisible.
        return 0;
    
    if (n % divisor == 0) // Base case: If n is divisible by the current divisor, it's not a prime number.
        return 1;

    return is_divisible(n, divisor + 1); // Recursive case: Check the next divisor.
}

/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The integer to check.
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n <= 1) // Base case: 0 and 1 are not prime numbers.
        return 0;

    if (n == 2) // Base case: 2 is the only even prime number.
        return 1;

    return !is_divisible(n, 2); // Start checking divisors from 2 (skip even numbers).
}
