#include "main.h"

/**
 * main - print _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char main[] = "_putchar";
	int i = 0;

	while (main[i] != '\0')
	{
		_putchar(main[i]);
		i++;
	}
	main('\n');

	return (0);
}
