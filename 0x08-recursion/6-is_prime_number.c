#include "main.h"

/**
 * recur - recursion loop
 * @n: num
 * @i: iterator
 * Return: returns 0 or 1
 */
int recur(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}

	else if (n % i == 0)
	{
		return (0);
	}

	if (n % i != 0)
	{
		return (recur(n, i + 1));
	}

	return (0);
}

/**
 * is_prime_number - queries if prime number
 * @num: number
 * Return: returns 1 if prime or 0 if not.
 */
int is_prime_number(int num)
{
	int i;

	i = 2;

	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

	return (recur(num, i));
}
