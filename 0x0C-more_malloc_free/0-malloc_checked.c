#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 * Return: 0 Success
 */
void *malloc_checked(unsigned int b)
{
	void *poi;

	poi = malloc(b);
	if (poi == NULL)
		exit(98);

	return (poi);
}
