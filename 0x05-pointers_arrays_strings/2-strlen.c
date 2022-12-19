#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: char type pointer input
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	
	return (i);
}	
