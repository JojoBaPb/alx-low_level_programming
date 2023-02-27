#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: unsigned long int to change
 * @index: index to change to one
 * Return: 1 if it success or -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
