#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: size of element
 * Return: NULL if error occurs
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *poi;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	poi = malloc(nmemb * size);
	if (poi == NULL)
		return (NULL);
	for (x = 0; x < nmemb; x++)
		poi[x] = 0;

	return (poi);
}
