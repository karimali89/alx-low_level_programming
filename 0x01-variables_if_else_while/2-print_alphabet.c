#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char newline = '\n';

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar(newline);

	return (0);
}
