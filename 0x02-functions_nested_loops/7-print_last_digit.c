#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: the number checked before print
 * Return: Value of the last digit.
 */

int print_last_digit(int n)
{
	int nl;

	if (n < 0)
	{
		nl = -1 * (n % 10);
		_putchar(nl + '0';
		return (nl);
	}
	else
	{
		nl = n % 10;
		_putchar(nl + '0';
		return(nl);
	}
}

