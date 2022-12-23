#include "main.h"

/**
 * cap_string - capitalizes first letterss of a string.
 * @string: string
 * Return: 'string'
 */

char *cap_string(char *string)
{
	int x, y;
	int key;
	char div[] = ",;.!?(){}\n\t\" ";

	for (x = 0, key = 0; string[x] != '\0'; x++)
	{
		if (string[0] > 96 && string[0] < 123)
			key = 1;
		for (y = 0; div[y] != '\0'; y++)
		{
			if (div[y] == string[x])
				key = 1;
		}
		if (key)
		{
			if (string[x] > 96 && string[x] < 123)
			{
				string[x] -= 32;
				key = 0;
			}
			else if (string[x] > 64 && string[x] < 91)
				key = 0;
			else if (string[x] > 47 && string[x] < 58)
				key = 0;
		}
	}
	return (string);
}
