#include "main.h"

/**
 * leet - encodes a string into 1337
 * @y: string
 * Return: y string
 */

char *leet(char *y)
{
	int x;

	for (x = 0; y[x] != '\0'; x++)
	{
		while (y[x] == 'a' || y[x] == 'A')
			y[x] = '4';
		while (y[x] == 'e' || y[x] == 'E')
			y[x] = '3';
		while (y[x] == 'o' || y[x] == 'O')
			y[x] = '0';
		while (y[x] == 't' || y[x] == 'T')
			y[x] = '7';
		while (y[x] == 'l' || y[x] == 'L')
			y[x] = '1';
	}

	return (y);
}
