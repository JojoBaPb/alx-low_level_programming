#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies string with malloc
 * @str: string
 * Return: NULL if str is NULL or pointer to dupli string
 */
char *_strdup(char *str)
{
	char *c;
	int a, b;

if (str == NULL)
return	(NULL);

for (a = 0; str[a] != '\0'; a++)
	;

c = malloc(a * sizeof(*c) + 1);
if (c == NULL)
	return (NULL);

for (b = 0; b < a; b++)
	c[b] = str[b];
c[b] = '\0';

return (c);
}
