#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	return (h1(n, 1));
}

/**
 * h1 - finds sqr root of of numbers
 * @a: number to find sqr root
 * @b: to be compared with a
 * Return: sqr root or -1
 */
int h1(int a, int b)
{
	int sqr;

	sqr = b * b;
	if (sqr == a)
		return (b);
	else if (sqr < a)
		return (h1(a, b + 1));
	else
		return (-1);
}
