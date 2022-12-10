#include <stdio.h>

/**
 * main - main function
 * Description: Prints an alphabet in lowercase
 * Return: zero(0)
 *
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
