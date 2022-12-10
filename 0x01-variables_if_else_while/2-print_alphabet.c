#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * Description: Print alphabet in lowercase
 * Return: zero(0)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
