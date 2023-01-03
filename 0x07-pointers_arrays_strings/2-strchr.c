#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: char array string
 * @c: char we are looking for
 * Return: NULL if char not found/ pointer to 1st occur of *c*
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
