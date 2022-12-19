#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: one int
 * @b: another int
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
