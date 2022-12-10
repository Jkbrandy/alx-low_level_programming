#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main fuction
 * Description: prints lowercase alphabet in reverse
 *
 * Return: zero(0)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
