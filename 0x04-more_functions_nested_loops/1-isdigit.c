#include "main.h"

/**
 *_isdigit - hecks for a digit (0 through 9)
 *@c: int to be checked
 *Return:1 when c is a digit
 *0 in all other instances
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
