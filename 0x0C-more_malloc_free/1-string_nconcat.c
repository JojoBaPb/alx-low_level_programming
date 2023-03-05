#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: poi
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *poi;
	unsigned int ss1 = 0, ss2 = 0, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[ss1] != '\0')
	{
		ss1++;
	}

	while (s2[ss2] != '\0')
	{
		ss2++;
	}

	if (n > ss2)
	n = ss2;
	poi = malloc((ss1 + n + 1) * sizeof(char));

	if (poi == NULL)
		return (0);

	for (x = 0; x < ss1; x++)
	{
		poi[x] = s1[x];
	}

	for (; x < (ss1 + x); x++)
	{
		poi[x] = s2[x - ss1];
	}
	poi[x] = '\0';

	return (poi);
}
