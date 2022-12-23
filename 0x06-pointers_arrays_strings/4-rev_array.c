#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: intger array
 * @n: number of integers
 */

void reverse_array(int *a, int n)
{
	int x, y;

	n = n - 1;
	y = 0;
	while (y <= n)
	{
		x = a[y];
		a[y++] = a[n];
		a[n--] = x;
	}
}
