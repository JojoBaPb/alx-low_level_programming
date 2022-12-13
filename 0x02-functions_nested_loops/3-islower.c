#include "main.h"

/**
 * _islower - return 1 if letter is lowercase
 * return 0 if not lowercase
 * @c char type
 */

int_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
