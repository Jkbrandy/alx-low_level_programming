#include "main.h"
/**
 * _islower - checks for lowercase character
 *@c: char to be used
 * Return: 1 if lowercase, 0 for other instances
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
