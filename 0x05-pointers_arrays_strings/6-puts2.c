#include "main.h"

/**
 *puts2 -  prints every other character of a string
 *starting with the first character
 *@str: input
 *Author: JK Opey
 *Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int x = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	x = longi - 1;
	for (z = 0 ; z <= x ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
