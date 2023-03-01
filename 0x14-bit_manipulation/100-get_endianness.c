#include "main.h"

/**
 *get_endianness - function checks foe endianness
 *Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *x = (char *)&y;

	if (*x)
		return (1);
	else
		return (0);
}
