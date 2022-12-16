#include "main.h"
#include <stdio.h>

/**
 *
 * main - that prints the numbers from 1 to 100
 * but for multiples of three print Fizz instead of the number
 *for the multiples of five print Buzz
 *multiples of both three and five print FizzBuzz
 *Return: zero(0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
