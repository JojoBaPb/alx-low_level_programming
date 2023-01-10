#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars, and initializes it with specific char
 * @size: size of array
 * @c: char
 * Return: NULL if 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int a;

	if (size == 0)
		return (NULL);

	ar =  malloc(size * sizeof(*ar));
	if (ar == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		ar[a] = c;

	return (ar);
}
