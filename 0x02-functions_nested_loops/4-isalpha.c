#include "main.h"

/**
 * _isalpha - checks if alphabetic character
 * @c unsigned int value referenced from ASCII values
 * Return: 1 if c is letter, lowrcase or uppercase OTHERWISE 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
