#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes char c to stdout
 *@c: the character to print
 *Return: 1 on succes
 *-1 when there is error and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
