#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: string a
 * @src: string b
 * @n: number of bytes to cnoncatenate with
 * Return: pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
