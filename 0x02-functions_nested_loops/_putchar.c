#include "main.h"
#include <unistd.h>

/**
 * _putchar : facilitates the write of character c to stdout
 * 
 *
 * Return: zero (0)
 *
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
