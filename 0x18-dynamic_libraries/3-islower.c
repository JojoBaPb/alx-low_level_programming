#include "main.h"

/**
 * _islower - Return 1 if letter is lowercase
 * Return: 0 if not lowercase
 * @c: char type
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
