#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of 2 diag of square matrix
 * @a: 2d int array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int diagsum1 = 0;
	int diagsum2 = 0;
	int x, y;

	for (x = 0; x < size; x++)
	{
		y = (x * size) + x;
		diagsum1 += a[y];
	}

	for (x = 1; x <= size; x++)
	{
		y = (x * size) - x;
		diagsum2 += a[y];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
