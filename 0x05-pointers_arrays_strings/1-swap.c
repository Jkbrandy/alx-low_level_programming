#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: one of the integers to swap
 *@b: one of the integers to swap
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
