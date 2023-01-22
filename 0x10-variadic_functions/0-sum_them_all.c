#include "variadic_function.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: params
 * Return: sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list lists;
	int sum;

	va_start(lists, n);
	for (i = 0, sum = 0; i < n; i++)
		sum  += va_arg(lists, int);

	va_end(lists);

	return (sum);
}