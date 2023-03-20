#include "main.h"

/**
 * _isdigit - check for digits 0 to 9
 * @c: parameter
 * Return: 1 if digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
