#include "main.h"

/**
*_memset- fills memory with a constant byte
*@s: buffer array
*@b: constant byte
*@n: number of bytes of memory area to fill
*Return: pointer to memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] =  b;
	}
	return (s);
}
