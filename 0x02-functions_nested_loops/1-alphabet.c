#include "main.h"

/**
 * print_alphabet - main function to print alphabet
 * in lower case
 *
 * Return: zero (0)
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter - 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

	return (0);
}
