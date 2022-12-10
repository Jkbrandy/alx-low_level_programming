#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - This is the main function
 *
 * Return: Always set return to 0
 *
*/

int main(void)
{
	int n;
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
