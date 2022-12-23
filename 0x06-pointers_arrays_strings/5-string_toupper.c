#include "main.h"

/**
 * string_toupper - Changes lowercase to uppercase
 * @Up: string pointer
 * Return: Up
 */

char *string_toupper(char *Up)
{
	int a;

	for (a = 0; Up[a] != '\0'; a++)
	{
		if (Up[a] > 96 && Up[a] < 123)
		{
			Up[a] -= 32;
		}
	}
	return (Up);
}
