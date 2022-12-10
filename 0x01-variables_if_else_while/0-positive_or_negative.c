#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - This is the main function
 *
 * Description: Get a number at
 * random and find negativity
 * Return: Always set return to 0
 *
*/

/**
 * main(Void): is the  main function
 *
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}