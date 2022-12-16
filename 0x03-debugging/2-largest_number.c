#include "main.h"

/* largest_number - returns the largest of 3 numbers
 * @a: first  number
 * @b: Second number
 * @c: third number
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = c;
	}
	else if (b > c)
	{
		 largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest)
}
